#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool tang(char s[]){
	for(int i=1;i<5;i++){
		if(s[i]<=s[i-1]) return false;
	}
	return true;
}
bool bang(char s[]){
	if(s[0]==s[1] && s[1]==s[2] && s[3]==s[4]) return true;
	else return false;
}
bool locPhat(char s[]){
	for(int i=0;i<5;i++){
		if(s[i]!='6' && s[i]!='8') return false;
	}
	return true;
}
int main() {
int t;
scanf("%d\n",&t);
while(t--){
	char s[50];
	gets(s);
	char a[5];
	int idx=0;
	for(int i=6;i<12;i++){
		if(i!=9) a[idx++]=s[i];
	}	
	if(tang(a) || bang(a) || locPhat(a)) printf("YES");
	else printf("NO");
	printf("\n");
}
}
/*
7
29-T1 123.45
29-T1 555.55
29-T1 222.33
29-T1 686.88
29-T1 123.33
29-T1 555.54
29-T1 606.88
*/
