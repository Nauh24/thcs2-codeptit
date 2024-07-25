#include<stdio.h>
typedef struct {
	int ma;
	char ten[1000];
	char ngaySinh[1000];
	float d1,d2,d3;
} sinhVien;
void nhap(sinhVien *a){
	getchar();
	gets(a->ten);
	gets(a->ngaySinh);
	scanf("%f %f %f",&a->d1, &a->d2, &a->d3);
}
void xuat(sinhVien a){
	printf("%d %s %s %.1f\n",a.ma, a.ten, a.ngaySinh, a.d1+a.d2+a.d3);
}

int main() {
	int n;
	scanf("%d", &n);
	sinhVien a[n];
	for(int i=0;i<n;i++){
		nhap(&a[i]);
		a[i].ma=i+1;
	}
	float res=0;
	for(int i=0;i<n;i++){
		float sum=a[i].d1+a[i].d2+a[i].d3;
		if(sum>res) res=sum;
	}
	for(int i=0;i<n;i++){
		float x=a[i].d1+a[i].d2+a[i].d3;
		if(x==res) xuat(a[i]);
	}
}



