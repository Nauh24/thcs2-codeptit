#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	int id;
	char name[100], type[100];
	double buyPrice, sellPrice, profit;
} Product;
void input(Product *a, int id){
	a->id=id;
	getchar();
	gets(a->name);
	gets(a->type);
	scanf("%lf %lf", &a->buyPrice, &a->sellPrice);
	a->profit=a->sellPrice-a->buyPrice;
}
void output(Product a){
	printf("%d %s %s %.2f\n",a.id, a.name, a.type, a.profit);
}
int cmp(const void *a, const void *b){
	Product *x = (Product *)a;
	Product *y = (Product *)b;
	return y->profit - x->profit;
}
int main() {
	int n;
	scanf("%d",&n);
	Product a[n];
	for(int i=0;i<n;i++){
		input(&a[i], i+1);
	}
	qsort(a,n,sizeof(Product),cmp);
	for(int i=0;i<n;i++){
		output(a[i]);
	}
}
/*
3
May tinh SONY VAIO
Dien tu
16400
17699
Tu lanh Side by Side
Dien lanh
18300
25999
Banh Chocopie
Tieu dung
27.5
37
*/
