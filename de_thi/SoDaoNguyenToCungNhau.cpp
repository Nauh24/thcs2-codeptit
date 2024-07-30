#include<stdio.h>
int dao(int n){
	int ans=0;
	while(n>0){
		ans= ans *10 + n%10;
		n/=10;
	}
	return ans;
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
		int x=dao(n);
		if(gcd(n,x)==1) printf("YES");
		else printf("NO");
		
		printf("\n");
	}
}
/*
2
123
997
*/
