#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s1[205];
	char s2[205];
	gets(s1);
	gets(s2);
	int n1=0,n2=0;
	char a[205][205], b[205][205];
	
	char *token1=strtok(s1," ");
	while(token1!=NULL){
		int ok=0;
		for(int i=0;i<n1;i++){
			if(strcmp(token1,a[i])==0) {
				ok=1;
				break;
			}
		}
		if(ok==0) strcpy(a[n1++],token1);
		token1=strtok(NULL," ");
	}
	
	char *token2=strtok(s2," ");
	while(token2!=NULL){
		int ok=0;
		for(int i=0;i<n2;i++){
			if(strcmp(token2,b[i])==0) {
				ok=1;
				break;
			}
		}
		if(ok==0) strcpy(b[n2++],token2);
		token2=strtok(NULL," ");
	}
	
	for(int i=0;i<n1-1;i++){
		for(int j=i+1;j<n1;j++){
			if(strcmp(a[i],a[j])>0){
				char tmp[205];
				strcpy(tmp,a[j]);
				strcpy(a[j],a[i]);
				strcpy(a[i],tmp);
			}
		}
	}
	
	for(int i=0;i<n1;i++){
		int ok=0;
		for(int j=0;j<n2;j++){
			if(strcmp(a[i],b[j])==0) {
				ok=1;
				break;
			}
		}
		if(ok==0) printf("%s ",a[i]);
	}
	printf("\n");
	}
}
/*
2
abc ab ab ab abcd
ab abc
aaa xyz ab zzz abc dd dd abc
xyz dd ttt sas cdc
*/
