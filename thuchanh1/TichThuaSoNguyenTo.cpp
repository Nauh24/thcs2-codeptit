#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long num=1;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				num*=i;
				while(n%i==0){
				n/=i;
				}
			}
		}
		if(n!=1) num*=n;
		printf("%lld", num);
		printf("\n");
	}
}

