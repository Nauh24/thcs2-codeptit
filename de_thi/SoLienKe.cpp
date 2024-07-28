#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
bool check(char s[]){
	for(int i=1;i<strlen(s);i++){
		if(abs(s[i]-s[i-1])!=1) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[20];
		scanf("%s",s);
		if(check(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
	
}
/*
3
123212
5654345676
10233211123
*/
