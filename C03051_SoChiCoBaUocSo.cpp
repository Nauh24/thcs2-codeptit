#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool check(int n){
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
		long long l,r;
		scanf("%lld %lld", &l, &r);
		int dem=0;
		l=ceil(sqrt(l));
		r=floor(sqrt(r));
		for(int i=l;i<=r;i++){
			if(check(i)) dem++;
		}
		printf("%d", dem);
		printf("\n");
	}
}

