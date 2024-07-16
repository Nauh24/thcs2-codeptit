#include<stdio.h>
#include<string.h>
int checkPair(char a, char b){
	if(a=='(' && b==')') return 1;
	if(a=='{' && b=='}') return 1; 
	if(a=='[' && b==']') return 1;
	if(a=='\'' && b=='\'') return 1;
	if(a=='"' && b=='"') return 1;
	return 0;
}
int check(char s[]){
	int n=strlen(s);
	char stack[200];
	int top=-1;
	for(int i=0;i<n;i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='[' || s[i]=='\'' || s[i]=='"') stack[++top]=s[i];
		else {
			if(top==-1) return 0;
			if(!checkPair(stack[top--],s[i])) return 0;
		}
	}
	return top==-1;
}
int main() {
	char s[201];
	gets(s);
	if(check(s)) printf("1");
	else printf("0");
}

