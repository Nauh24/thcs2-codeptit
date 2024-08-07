#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct{
	float a,b,c;
} TamGiac;
void nhap(TamGiac *tg){
	scanf("%f %f %f",&tg->a, &tg->b, &tg->c);
}
float area(TamGiac tg){
	float a=tg.a, b=tg.b, c=tg.c;
	float p=(a+b+c)/2.0;
	return (float)sqrt(p*(p-a)*(p-b)*(p-c));
}
void xuat(TamGiac tg){
	printf("%.0f %.0f %.0f\n", tg.a, tg.b, tg.c);
}
int cmp(const void *a, const void *b){
	TamGiac *x = (TamGiac *)a;
	TamGiac *y = (TamGiac *)b;
	float area1 = area(*x);
	float area2 = area(*y);
 	if(area1 < area2) return -1;
	if(area1 > area2) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	TamGiac a[n];
	for(int i=0;i<n;i++){
		nhap(&a[i]);
	}
	qsort(a,n,sizeof(TamGiac), cmp);
	for(int i=0;i<n;i++){
		xuat(a[i]);
	}
}
