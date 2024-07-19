#include<stdio.h>
#include<stdbool.h>
bool check(int n){
	int res=n;
	int sum=0;
	int ans=0;
	int ok=0;
	while(n>0){
		int x=n%10;
		sum+=x;
		if(x==6) ok=1;
		ans=ans*10+x;
		n/=10;
	}
	if(ok==0) return false;
	return ans==res && sum%10==8;
}
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		int tmp=b;
		b=a;
		a=tmp;
	}
	int cnt=0;
	for(int i=a;i<=b;i++){
		if(check(i)){
			printf("%d ",i);
		} 
	}
	printf("\n");
}

