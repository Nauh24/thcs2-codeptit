#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct{
	int num;
	int count;
} Number;

int cmp(const void *a, const void *b){
	Number *x = (Number *)a;
	Number *y = (Number *)b;
	return y->count - x->count;
}
bool check(int n){
	int d=n%10;
	n/=10;
	while(n>0){
		if(n%10>d) return false;
		d=n%10;
		n/=10;
	}
	return true;
}
int main() {
	Number a[100001];
	int x;
	int n=0;
	while(scanf("%d", &x)!=-1){
		//if(x==-1) break;
		if(check(x)){
			int ok=0;
			for(int i=0;i<n;i++){
				if(a[i].num==x){
					a[i].count++;
					ok=1;
				}
			}
			if(!ok){
				a[n].num=x;
				a[n].count=1;
				n++;
			}
		}
		
	}
	qsort(a,n,sizeof(Number),cmp);
	for(int i=0;i<n;i++){
		printf("%d %d\n",a[i].num, a[i].count);
	}
}
/*
123 321 23456 123 123 23456 3523 123 321
8988 7654 9899 3456 123 999 3456 
987654321 4546 63543 46566 13432 4563
123471 659837 454945 34355 9087 9977
98534 3456 23134
*/
