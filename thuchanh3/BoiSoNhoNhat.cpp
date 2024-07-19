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
		ll n,m;
		scanf("%lld %lld",&n,&m);
		
		ll r=n;
		for(ll i=n+1;i<=m;i++){
			r=bsc(r,i);
		}
		printf("%lld",r);
		printf("\n");
	}
}

