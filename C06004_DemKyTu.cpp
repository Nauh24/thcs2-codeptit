#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char s[100];
	gets(s);
	int cnt1=0,cnt2=0;
	for(int i=0;i<strlen(s);i++){
		if(isalpha(s[i])) cnt1++;
		if(isdigit(s[i])) cnt2++;
	}
	printf("%d %d %d",cnt1,cnt2,strlen(s)-cnt1-cnt2);
}

