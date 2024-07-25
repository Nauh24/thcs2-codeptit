#include<stdio.h>
#include<math.h>
typedef long long ll;
int isPrime(ll n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		ll res;
		int ok=0;
		for(ll i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(isPrime(n/i)) {
					printf("%lld",n/i);
					ok=1;
					break;
				}
				if(isPrime(i)) res=i;
			}
		}

		if(ok==0)	printf("%lld",res);
		printf("\n");
	}
}

