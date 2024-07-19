#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n){
	if (n<2) return false;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) return false;
	}
	return true;
}
bool thuanNghich(int n){
	int b=n;
	int res=0;
	while(n>0){
		res=res*10+n%10;
		n/=10;
	}
	if(res==b) return true;
	else return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(isPrime(i) && thuanNghich(i)) {
				cnt++;
				printf("%d ", i);
				if(cnt%10==0 ) printf("\n");
			}
		}
		printf("\n");
	}
}

