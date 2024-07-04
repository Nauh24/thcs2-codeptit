#include<stdio.h>
#include<stdbool.h>
bool check(long long n){
	int d= n%10;
	n/=10;
	while(n>0) {
		if(n%10 > d) return false;
		d=n%10;
		n/=10;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}

