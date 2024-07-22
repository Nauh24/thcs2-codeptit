#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>
bool check1(char s[]){
	int n=strlen(s);
	for(int i=0;i<n;i++){
		if(!isdigit(s[i])) return false;
	}
	return true;
}
bool check2(char s[]){
	int n=strlen(s);
	int d[10]={0};
	for(int i=0;i<n;i++){
		if(isdigit(s[i])){
			d[s[i]-'0']++;
		}
	}
	for(int i=0;i<10;i++){
		if(d[i]==0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[1005];
		gets(s);
		if(s[0]=='0') printf("INVALID");
		else {
			if(!check1(s)) printf("INVALID");
			else {
				if(check2(s)) printf("YES");
				else printf("NO");
			}
		}
		printf("\n");
	}
}
/*
3
01234aa32432432432534545b987978
123444444444444566666666667890
324562783924723543243243242354354354333234324
*/
