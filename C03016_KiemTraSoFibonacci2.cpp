#include<stdio.h>
#include<stdbool.h>
typedef long long ll;
bool check(ll n){
	if(n==0 || n==1) return true;
	ll f1=0,f2=1;
	ll f=f1+f2;
	while(f<n){
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	return f==n;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		if(check(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}

