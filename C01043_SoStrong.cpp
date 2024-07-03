#include<stdio.h>
int gt(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
int main() {
	int n;
	scanf("%d", &n);
	int sum=0;
	int a=n;
	while(a>0) {
		sum+=gt(a%10);
		a/=10;
	}
	if(sum==n) printf("1");
	else printf("0");
}

