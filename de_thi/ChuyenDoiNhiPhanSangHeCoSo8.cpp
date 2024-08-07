#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	char s[101];
	scanf("%s", s);
	int n=strlen(s);
	char res[105];
	int p = 3-(n%3);
	for(int i=0;i<p;i++){
		res[i]='0';
	}
	strcpy(res+p, s);
	for(int i=0;i<strlen(res)-2;i+=3){
		int num = (res[i]-'0')*4 + (res[i+1]-'0')*2 + (res[i+2]-'0');
		printf("%d", num);
	}
	//printf("%s", res);
}
/*
1010
11001100
*/
