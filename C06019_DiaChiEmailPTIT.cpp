#include<stdio.h>
#include<string.h>
#include<ctype.h>
void tranfer(char s[]){
	for(int i=0;i<strlen(s);i++) s[i]=tolower(s[i]);
}
int main() {
	char s[55];
	gets(s);
	char a[55][55];
	int n=0;
	tranfer(s);
	char *token=strtok(s," ");
	while(token!=NULL){
		strcpy(a[n++],token);
		token=strtok(NULL," ");
	}
	for(int i=0;i<n-1;i++){
		printf("%c",a[i][0]);
	}
	printf("%s",a[n-1]);
	printf("@ptit.edu.vn");
}

