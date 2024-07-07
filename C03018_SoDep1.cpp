#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int isPrime(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

int tong(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

bool isFibo(int n){
	int a=0, b=1, c;
	if(n==0) return true;
	while(true){
		c=a+b;
		if(c==n) return true;
		if(c>n) return false;
		a=b;
		b=c;
	}
}
int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	if(a>b){
		int tmp=b;
		b=a;
		a=tmp;
	}
	for(int i=a;i<=b;i++){
		if(isPrime(i) && isFibo(tong(i))) printf("%d ", i);
	}
}

