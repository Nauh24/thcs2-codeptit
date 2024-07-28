#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[5];
	int i=0;
	while(n>0){
		a[i++]=n%1000;
		n/=1000;
	}
	for(int j=i-1;j>=0;j--){
		printf("%d",a[j]);
		if(j!=0) printf(",");
	}
}

