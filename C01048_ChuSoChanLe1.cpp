#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int even=0, odd =0, x;
	while(n>0) {
		x= n%10;
		if(x%2==0) even++;
		else odd++;
		n/=10;
	}
	printf("%d %d", odd ,even);
}

