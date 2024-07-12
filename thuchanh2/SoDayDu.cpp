#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
bool check(char s[]){
	if(s[0]=='0') return false;
	for(int i=0;i<strlen(s);i++){
		if(!isdigit(s[i])) return false;
	}
	return true;
}
bool check2(char s[]){
	int d[1005]={0};
	for(int i=0;i<strlen(s);i++){
		d[s[i]]=1;
	}
	for(int i=0;i<10;i++){
		if(d[i+'0']==0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[1005];
		gets(s);
		if(!check(s)) printf("INVALID");
		else if(check2(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}

