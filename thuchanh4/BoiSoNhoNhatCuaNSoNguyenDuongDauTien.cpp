#include<stdio.h>
typedef long long ll;
ll usc(ll a, ll b){
	if(b==0) return a;
	else return usc(b,a%b);
}
ll bsc(ll a, ll b){
	return a*b/usc(a,b);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ll r=1;
		for(int i=2;i<=n;i++){
			r=bsc(r,i);
		}
		printf("%lld",r);
		printf("\n");
	}
}

