#include<stdio.h>
typedef long long  ll;
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ll a[n];
		ll sum=0, maxx=0;
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
			sum+=a[i];
			if(sum<0) sum=0;
			if(sum>maxx) maxx=sum;
		}
		printf("%lld",maxx);
		printf("\n");
	}
}

