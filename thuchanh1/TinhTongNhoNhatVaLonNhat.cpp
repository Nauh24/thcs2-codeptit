#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void convert_to_min(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='6') s[i]='5';
	}
}

void convert_to_max(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='5') s[i]='6';
	}
}
void solve(char a[], char b[]){
	char c[20], d[20];
	strcpy(c,a);
	strcpy(d,b);
	convert_to_min(a);
	convert_to_min(b);
	convert_to_max(c);
	convert_to_max(d);
	int minn=atoll(a)+atoll(b);
	int maxx=atoll(c)+atoll(d);
	printf("%d %d", minn, maxx);
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		char a[20], b[20];
		scanf("%s %s", &a, &b);
		solve(a,b);
		printf("\n");
	}
}

