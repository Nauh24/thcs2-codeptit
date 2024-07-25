#include<stdio.h>
#include<string.h>
int check(char s[]){
	int n=strlen(s);
	int cnt=0;
	int i=0, j=n-1;
	while(i<=j){
		if(s[i]!=s[j]) cnt++;
		i++;
		j--;
	}
	if(cnt==0 && n%2==1) return 1;
	return cnt==1;
}
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[25];
		scanf("%s",s);
		if(check(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}

