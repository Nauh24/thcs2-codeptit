#include<stdio.h>
int gt(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}

int check(int n){
	int sum=0, res=n;
	while(res>0){
		sum+=gt(res%10);
		res/=10;
	}
	return sum==n;
}
int main() {
	int n;
	scanf("%d", &n);
	for(int i=1;i<n;i++){
		if(check(i))  printf("%d ",i);
	}
}

