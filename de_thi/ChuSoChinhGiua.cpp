#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[20];
		gets(s);
		int n=strlen(s);
		if(n%2==0 || n==1) printf("NONE");
		else printf("%c",s[n/2]);
		printf("\n");
	}
	
}

