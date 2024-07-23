#include<stdio.h>
#include<string.h>
#include<ctype.h>

void tranfer(char s[]){
	s[0]=toupper(s[0]);
	for(int i=1;i<strlen(s);i++) s[i]=tolower(s[i]);
}
void upper(char s[]){
	for(int i=0;i<strlen(s);i++) s[i]=toupper(s[i]);
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
		for(int i=1 ;i<n;i++){
			tranfer(a[i]);
			printf("%s",a[i]);
			if(i==n-1) printf(", ");
			else printf(" ");
		}
		upper(a[0]);
		printf("%s",a[0]);
		printf("\n");
	}
}
/*
4
    nGUYEn    quaNG   vInH  
   tRan   thi THU    huOnG
   nGO   quoC  VINH
 lE            tuAn    aNH
*/
