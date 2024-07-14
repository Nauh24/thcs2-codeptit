#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[200];
		gets(s);
		int cnt=0;
		char *token= strtok(s," ");
		while(token!=NULL){
			cnt++;
			token=strtok(NULL," ");
		}
		printf("%d",cnt);
		printf("\n");
	}
}
/*
2
Lap trinh     C va C++
ACBDSDS kdfjdkgfdgkhfgjlfgdkjfdgdgfdgfd
*/
