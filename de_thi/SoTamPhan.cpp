#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]!='0' && s[i]!='1' && s[i]!='2') return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[20];
		gets(s);
		if(check(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
/*
3
1214AB
10210221
22222222
*/
