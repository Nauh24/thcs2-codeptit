#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void tranfer(char s[]){
	for(int i=0;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
}
int main() {
	char s[55];
	gets(s);
	int n=0;
	char a[55][55];
	char* token=strtok(s," ");
	while(token!=NULL){
		strcpy(a[n], token);
		n++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n-1;i++){
		a[i][0]=tolower(a[i][0]);
		printf("%c",a[i][0]);
	}
	tranfer(a[n-1]);
	printf("%s@ptit.edu.vn",a[n-1]);
}

