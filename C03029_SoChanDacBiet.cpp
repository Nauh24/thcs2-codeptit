#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool check(char number[]){
	for(int i=0;i<strlen(number);i++){
		int d=number[i]-'0';
		if(d%2!=0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		char number[20];
		scanf("%s", number);
		if(check(number)) printf("YES\n");
		else printf("NO\n");
	}
}

