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
int check(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	if(sum%5==0) return 1;
	else return 0;
}
int main() {
		int n;
		scanf("%d", &n);
		int cnt=0;
		for(int i=2;i<n;i++){
			if(check(i)&&isPrime(i)) {
				cnt++;
				printf("%d ",i);
			}
		}
		printf("\n");
		printf("%d",cnt);
}

