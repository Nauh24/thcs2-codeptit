#include<stdio.h>
#include<string.h>
int main(){
	char s[100001];
	gets(s);
	int n=strlen(s);
	int idx=0;
	char res[n+1];
	res[0]=s[n-1];
	idx++;
	for(int i=n-2;i>=0;i--){
		if(s[i]>=res[idx-1]) {
			res[idx]=s[i];
			idx++;
		}
	}
	for(int i=idx-1;i>=0;i--) printf("%c",res[i]);
}
