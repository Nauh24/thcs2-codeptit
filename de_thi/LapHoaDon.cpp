#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct{
	char id[10];
	char name[100];
	char soPhong[10];
	int soNgay;
	int tienPhatSinh;
} KhachHang;

int donGia(KhachHang kh) {
	if(kh.soPhong[0]=='1') return 25;
	else if(kh.soPhong[0]=='2') return 34;
	else if(kh.soPhong[0]=='3') return 50;
	else return 80;
}

int thanhTien(KhachHang kh){
	return kh.soNgay*donGia(kh) + kh.tienPhatSinh;
}

void printfKH(KhachHang kh){
	printf("%s %s %s %d %d\n",kh.id, kh.name, kh.soPhong, kh.soNgay, thanhTien(kh));
}

int cmp(const void *a, const void *b){
	KhachHang *x = (KhachHang *)a;
	KhachHang *y = (KhachHang *)b;
	return thanhTien(*y) - thanhTien(*x);
}
int main() {
	int n;
	scanf("%d", &n);
	KhachHang a[n];
	getchar();
	for(int i=0;i<n ;i++){
		sprintf(a[i].id, "KH%02d", i+1);
		gets(a[i].name);
		while(isspace(a[i].name[strlen(a[i].name)-1])) {
			a[i].name[strlen(a[i].name)-1] = '\0';
		}
		scanf("%s", a[i].soPhong);
		char ngayDen[11], ngayDi[11];
		scanf("%s", ngayDen);
		scanf("%s", ngayDi);
		scanf("%d", &a[i].tienPhatSinh);
		getchar();	
	}
	for(int i=0 ;i< n;i++){
		printf("%s %s %s ", a[i].id, a[i].name, a[i].soPhong);
		printf("\n");
	}
	//printf("1");
}

/*
3
Huynh Van Thanh   
103 
05/06/2010   
05/06/2010   
15
Le Duc Cong  
106 
08/03/2010   
01/05/2010   
220
Tran Thi Bich Tuyen   
207 
10/04/2010   
21/04/2010   
96
*/
