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
bool check(int n){
	int sum=0;
	while(n>0){
		int x=n%10;
		if(!isPrime(x)) return false;
		sum+=x;
		n/=10;
	}
	if(isPrime(sum)) return true;
	else return false;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(check(i) && isPrime(i)) cnt++;
		}
		printf("%d",cnt);
		printf("\n");
	}
}

