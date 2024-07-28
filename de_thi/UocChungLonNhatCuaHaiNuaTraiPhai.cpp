#include<stdio.h>
#include<string.h>
int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main() {
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[19];
		gets(s);
		int n=strlen(s);
		if(n%2==1) printf("INVALID");
		
		else {
			int left=0, right=0;
			for(int i=0;i<n/2;i++) {
				left = left*10 + (s[i]-'0');
			}
			for(int i=n/2;i<n;i++) {
				right = right*10 + (s[i]-'0');
			}
			printf("%d",gcd(left,right));
		}
		
		printf("\n");
	}
}

