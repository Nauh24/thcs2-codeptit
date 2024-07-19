#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool check(int n){
	int res=n;
	int sum=0;
	int ans=0;
	while(n>0){
		sum+=n%10;
		ans=ans*10+n%10;
		n/=10;
	}
	return ans==res && sum%10==0;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int l=pow(10,n-1);
		int r=pow(10,n)-1;
		int cnt=0;
		for(int i=l;i<=r;i++){
			if(check(i)) cnt++;
		}
		printf("%d",cnt);
		printf("\n");
	}
}

