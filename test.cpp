#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void to_upper(char *s){
	for(int i=0;i<strlen(s);i++) s[i]=toupper(s[i]);
}
void tranfer(char *s){
	s[0]=toupper(s[0]);
	for(int i=1;i<strlen(s);i++) s[i]=tolower(s[i]);
}
int main(){
	int n;
	scanf("%d\n", &n);
	while(n--){
		char s[51];
		gets(s);
		char *token = strtok(s, " ");
		char a[51][51];
		int n=0;
		while(token!=NULL){
			strcpy(a[n++], token);
			token = strtok(NULL," ");
		}
		for(int i=1;i<n;i++){
			tranfer(a[i]);
			printf("%s", a[i]);
			if(i!=n-1) printf(" ");
		}
		printf(", ");
		to_upper(a[0]);
		printf("%s\n",a[0]);
	}
}
/*
4
    nGUYEn    quaNG   vInH  
   tRan   thi THU    huOnG
   nGO   quoC  VINH
 lE            tuAn    aNH
 */
