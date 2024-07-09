#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool check(char s[]){
	int l=strlen(s);
	int even=0, odd=0;
	for(int i=0;i<l;i++){
		if((s[i]-'0') %2==0) even++;
		else odd++;
	}
	if((s[l-1]-'0')%2!=0 &&odd>even) return true;
	else return false;
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

