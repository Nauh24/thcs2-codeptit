#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int isPrime(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
bool check(char s[]){
	int l=0, r=strlen(s)-1;
	while(l<=r){
		if(s[l]!=s[r]) return false;
		l++;
		r--;
	}
	return true;
}
bool check2(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(isPrime(s[i]-'0')==0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[500];
		gets(s);
		if(check(s)&&check2(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
/*
3
123456787654321
235755557532
2222333355557777235775327777555533332222
*/
