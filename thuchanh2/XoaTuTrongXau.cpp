#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>
bool check(char a[], char b[]){
	int l1=strlen(a);
	int l2=strlen(b);
	if(l1!=l2) return false;
	for(int i=0;i<l1;i++){
		if(tolower(a[i]) != tolower(b[i])) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	getchar();
	for(int i=1;i<=t;i++){
		char s1[205], s2[205];
		gets(s1);
		gets(s2);
		char* token =strtok(s1," ");
		char a[205][205];
		int n=0;
		printf("Test %d: ",i);
		while(token!=NULL){
			if(!check(token,s2)) {
				strcpy(a[n],token);
				n++;
			}
			token=strtok(NULL," ");
		}
		for(int i=0;i<n;i++){
			printf("%s ", a[i]);
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
