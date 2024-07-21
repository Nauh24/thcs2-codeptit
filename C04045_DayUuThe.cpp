#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[2005];
		gets(s);
		int c=0, l=0, cnt=0;
		int num=0;
		for(int i=0;i<strlen(s);i++){
			if(s[i]!=' '){
				num=num*10+(s[i]-'0');
			}
			else {
				cnt++;
				if(num%2==0) c++;
				else l++;
			}
		}
		cnt++;
		if(num%2==0) c++;
		else l++;
		if((cnt%2==0 && c>l) || (cnt%2!=0 && l>c)) printf("YES");
		else printf("NO"); 
		printf("\n");
	}
}
/*
2
11 22 33 44 55 66 77
23 34 45 56 67 78 89 90 121 131 141 151 161 171
*/
