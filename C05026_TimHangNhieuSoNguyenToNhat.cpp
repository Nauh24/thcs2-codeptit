#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) return false;
	}
	return true;
}
int main() {
	int n;
	scanf("%d",&n);
	int a[n][n];
	int cnt;
	int max=0;
	int idx=0;
	for(int i=0;i<n;i++){
		cnt=0;
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(isPrime(a[i][j])) cnt++;
		}
		if(cnt>max){
			max=cnt;
			idx=i;
		}
	}
	printf("%d\n",idx+1);
	for(int i=0;i<n;i++){
		if(isPrime(a[idx][i])) printf("%d ",a[idx][i]);
	}
}

