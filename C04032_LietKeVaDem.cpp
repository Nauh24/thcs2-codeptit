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
bool soKhongGiam(int n){
	int x=n%10;
	n/=10;
	while(n>0){
		if(n%10>x) return false;
		x=n%10;
		n/=10;
	}
	return true;
}

int main() {
	Number a[100001];
	int n=0,x;
	while(scanf("%d", &x) != -1){
		if(soKhongGiam(x)){
			int found=0;
			for(int i=0;i<n;i++){
				if(a[i].num==x){
					a[i].count++;
					found=1;
					break;
				}
			}
			if(!found){
				a[n].num=x;
				a[n].count=1;
				n++;
			}
		}
		//if(x==-1) break;
	}
	qsort(a,n,sizeof(Number), cmp);
	for(int i=0;i<n;i++){
		printf("%d %d\n", a[i].num, a[i].count);
	}
	
}

