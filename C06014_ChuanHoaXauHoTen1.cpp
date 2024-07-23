#include<stdio.h>
#include<string.h>
#include<ctype.h>

void tranfer(char s[]){
	s[0]=toupper(s[0]);
	for(int i=1;i<strlen(s);i++) s[i]=tolower(s[i]);
}
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[85];
		gets(s);
		int n=0;
		char a[85][85];
		char *token=strtok(s," ");
		while(token!=NULL){
			strcpy(a[n++],token);
			token=strtok(NULL," ");
		}
		for(int i=0 ;i<n;i++){
			tranfer(a[i]);
			printf("%s ",a[i]);
		}
		printf("\n");
	}
}


