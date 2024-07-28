#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[501];
		gets(s);
		int n=strlen(s);
		int first = (s[0]-'0')*100 + (s[1]-'0')*10 + (s[2]-'0');
		int end = (s[n-3]-'0')*100 + (s[n-2]-'0')*10 + (s[n-1]-'0');
		if(isPrime(first) && isPrime(end)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}

