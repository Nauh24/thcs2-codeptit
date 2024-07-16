#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main() {
	char s[100];
	gets(s);
	int idx=0;
	char a[100][100];
	char *token=strtok(s," ");
	while(token!=NULL) {
		bool ok=true;
		for(int i=0;i<idx;i++){
			if(strcmp(token,a[i])==0) {
				ok=false;
				break;
			}
		}
		if(ok){
			strcpy(a[idx++],token);
		}
		token=strtok(NULL," ");
	}
	for(int i=0;i<idx;i++){
		printf("%s ",a[i]);
	}
}

