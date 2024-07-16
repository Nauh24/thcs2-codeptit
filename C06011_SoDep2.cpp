#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char s[]){
	int l=strlen(s);
	if(s[0]!='8'||s[l-1]!='8') return false;
	int sum=0;
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i]) return false;
		sum+=(s[i]-'0')*2;
	}
	if(l%2!=0) sum+=(s[l/2]-'0');
	return sum%10==0; 
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
