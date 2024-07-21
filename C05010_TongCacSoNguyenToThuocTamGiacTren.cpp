#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main() {
	int n;
	scanf("%d",&n);
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) scanf("%d", &a[i][j]);
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(isPrime(a[i][j])) sum+=a[i][j];
		}
	}
	printf("%d",sum);
}

