#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char s[]){
	int l=strlen(s);
	if(2*(s[0]-'0')!=(s[l-1]-'0') && (s[0]-'0')!=2*(s[l-1]-'0')) return false;
	for(int i=1;i<l/2;i++){
		if(s[i]!=s[l-1-i]) return false;
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

