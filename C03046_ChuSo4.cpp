#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool check(int n){
	int ans=n;
	int res=0;
	int sum=0;
	while(n>0){
		int x=n%10;
		if(x==4) return false;
		sum+=x;
		res=res*10+x;
		n/=10;
	}
	if(res==ans&&sum%10==0) return true;
	return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int l=pow(10,n-1);
		int r=pow(10,n)-1;
		for(int i=l;i<=r;i++) {
			if(check(i)) printf("%d ",i);
		}
		printf("\n");
	}
}

