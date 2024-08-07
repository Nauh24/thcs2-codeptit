#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	char a[3];
	float b;
} Element;
int cmp(const void *a, const void *b){
	Element *x = (Element *)a;
	Element *y = (Element *)b;
	float z = x->b-y->b;
	if(z<0) return -1;
	else if(z>0) return 1;
	else return 0;
}

void xuat(Element a[], int n){
	for(int i=0;i<n;i++){
		printf("%s ",a[i].a);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%.3f ",a[i].b);
	}
	printf("\n");
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		Element a[n];
		for(int i=0;i<n;i++){
			scanf("%s", a[i].a);
		}
		for(int i=0 ;i<n;i++){
			scanf("%f", &a[i].b);
		}
		qsort(a,n,sizeof(Element), cmp);
		xuat(a,n);
		printf("\n");
	}
}

/*
4
c d a b
0.25 0.5 0.125 0.125
*/

