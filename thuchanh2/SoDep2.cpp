#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char s[]){
	int l=0, r=strlen(s)-1;
	if(s[l]!='8' || s[r]!='8') return false;
	while(l<=r){
		if(s[l]!=s[r]) return false;
		l++;
		r--;
	}
return true;
}
bool checkSum(char s[]){
	int sum=0;
	for(int i=0;i<strlen(s);i++){
		sum+=s[i]-'0';
	}
	return sum%10==0;
}
int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[500];
		gets(s);
		if(check(s) && checkSum(s)) printf("YES");
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
