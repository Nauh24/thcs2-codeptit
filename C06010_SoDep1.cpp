#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char s[]){
	int l=strlen(s);
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i] || (s[i]-'0')%2!=0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[501];
		gets(s);
		int l=strlen(s);
		if(check(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
/*
4
123456787654321
86442824468
8006000444422220000222244440006008
235365789787654324567856578654356786556
*/
