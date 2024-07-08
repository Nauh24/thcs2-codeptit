#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char s[]){
	int l=strlen(s);
	if(l%2==0) return false;
	for(int i=0;i<l/2;i++){
		if((s[i]-'0')%2==0 || s[i]!=s[l-i-1]) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", &s);
		if(check(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}

