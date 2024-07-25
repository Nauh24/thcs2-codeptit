#include<stdio.h>
typedef struct{
	int tu;
	int mau;
} PhanSo;

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int lcm(int a, int b){
	return a*b/gcd(a,b);
}
void nhap(PhanSo *a){
	scanf("%d %d", &a->tu, &a->mau);
}
void xuat(PhanSo a){
	printf("%d/%d ", a.tu, a.mau);
}
void rutGon(PhanSo *a){
	int c=gcd(a->tu,a->mau);
	a->tu=a->tu/c;
	a->mau=a->mau/c;
}
void quyDong(PhanSo *a, PhanSo *b){
	int x=lcm(a->mau, b->mau);
	a->tu=a->tu*x/a->mau;
	b->tu=b->tu*x/b->mau;
	a->mau=x;
	b->mau=x;
	
}
PhanSo tong(PhanSo a, PhanSo b){
	PhanSo c;
	c.tu=a.tu+b.tu;
	c.mau=a.mau;
	rutGon(&c);
	return c;
}
PhanSo thuong(PhanSo a, PhanSo b){
	PhanSo c;
	c.tu=a.tu*b.mau;
	c.mau=a.mau*b.tu;
	rutGon(&c);
	return c;
}
int main() {
	int t;
	scanf("%d",&t);
	int k=1;
	while(t--){
		PhanSo a,b;
		nhap(&a);
		nhap(&b);
		printf("Case #%d:\n",k++);
		rutGon(&a);
		rutGon(&b);
		quyDong(&a,&b);
		xuat(a);
		xuat(b);
		printf("\n");
		PhanSo c=tong(a,b);
		printf("\n");
		xuat(c);
		PhanSo d=thuong(a,b);
		printf("\n");
		xuat(d);
		printf("\n");
	}
}


