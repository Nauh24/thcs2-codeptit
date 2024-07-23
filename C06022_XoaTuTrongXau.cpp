#include<stdio.h>
#include<string.h>
#include<ctype.h>
void lower(char s[]){
	for(int i=0;i<strlen(s);i++) s[i]=tolower(s[i]);
}
int main() {
	int t;
	scanf("%d\n",&t);
	int k=1;
	while(t--){
		char s1[205], s2[25];
		gets(s1);
		gets(s2);
		char a[205][205], b[205][205];
		int n=0, x=0;
		char *token=strtok(s1," ");
		while(token!=NULL){
			strcpy(a[n++],token);
			lower(token);
			strcpy(b[x++],token);
			token=strtok(NULL," ");
		}
		
		
//		for(int i=0;i<n;i++){
//			printf("%s %s\n",a[i],b[i]);
//		}
		
		printf("Test %d: ",k++);
		lower(s2);
		for(int i=0;i<n;i++){
			if(strcmp(b[i],s2)!=0) printf("%s ",a[i]);
		}
		printf("\n");
	}
}
/*
2
Abc ddd abdc aaa bbb abc ddD XY
aBc
ACHDNC XXXX YYYY ABC ABC XXXX
XxXx
*/
