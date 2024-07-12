#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		int idx=0;
		int b[101];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(isPrime(a[i])){
				b[idx++] = a[i];
			}
		}
		for(int i=0;i<idx;i++){
			printf("%d ",b[i]);
		}
		printf("\n");
	}
}

