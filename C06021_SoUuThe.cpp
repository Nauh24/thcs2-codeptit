#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool check(char s[]){
	for(int i=0; i<strlen(s);i++){
		if(!isdigit(s[i])) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[1005];
		gets(s);
		if(s[0]=='0'){
			printf("INVALID");
		}
		else{
			if(!check(s)) printf("INVALID");
			else {
				int n=strlen(s);
				int c=0,l=0;
				for(int i=0;i<n;i++){
					if((s[i]-'0')%2==0) c++;
					else l++;
				}
				if((n%2==0 && c>l) || (n%2!=0 && l>c)) printf("YES");
				else printf("NO");
			}
		}
		printf("\n");
	}
}

