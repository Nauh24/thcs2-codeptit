#include<stdio.h>
int dao(int n){
	int sum=0;
	while(n>0){
		int d=n%10;
		sum = sum*10 +d;
		n/=10;
	}
	return sum;
}
int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d", gcd(n,dao(n)));
		printf("\n");
	}
}

/*
2
12
222
*/
