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
bool check(char s[]){
	int l=strlen(s);
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i] || !isPrime(s[i]-'0')) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[501];
		gets(s);
		if(check(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
/*
4
123456787654321
8644281154664511824468
8006000444400000000000044440006008
82123400000000000000000000000432128
*/
