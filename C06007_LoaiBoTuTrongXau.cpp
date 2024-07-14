#include<stdio.h>
#include<string.h>
int main() {
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	int idx=0;
	char a[100][100];
	char *token=strtok(s1," ");
	while(token!=NULL){
		strcpy(a[idx++],token);
		token=strtok(NULL," ");
	}
	for(int i=0;i<idx;i++){
		if(strcmp(a[i],s2)) printf("%s ",a[i]);
	}
}
/*
mon thcs2 la mon 2tc
mon
*/
