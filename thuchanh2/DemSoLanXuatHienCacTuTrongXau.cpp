#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void tranfer(char s[]){
	for(int i=0;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
}
int main() {
	char s[1000];
	gets(s);
	tranfer(s);
	char* token=strtok(s, " ");
	int n=0;
	char a[1000][1000];
	while(token!= NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int d[1000]={0};
	for(int i=0;i<n;i++){
		if(d[i]==0){
			int cnt=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i], a[j])==0){
					cnt++;
					d[j]=1;
				}
			}
			printf("%s %d\n", a[i], cnt);
		}
	}
}

