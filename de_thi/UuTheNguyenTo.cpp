#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
bool check(char s[]){
	int n=strlen(s);
	if(!isPrime(n)) return false;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(isPrime(s[i]-'0')) cnt++;
	}
	return cnt>n/2;
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
3
1234567
22334455667
23400300489898989
*/
