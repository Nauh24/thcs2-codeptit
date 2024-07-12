#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long a[n];
		for(int i=0;i<n;i++){
			scanf("%lld", &a[i]);
		}
		long long sum1 = 0, sum2 = 0;
		for(long long i = 0; i < n; i++){
			sum1 += a[i];
			if(sum1 < 0) sum1 = 0;
			if(sum1 > sum2) sum2 = sum1;
		}
		printf("%lld", sum2);
		printf("\n");
	}
}

