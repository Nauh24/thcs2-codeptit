#include<stdio.h>
#include<string.h>
void merge(char s1[], char s2[], char s[], int n){
	int idx=0;
	for(int i=0;i<n;i++){
		s[idx++]=s2[i];
		s[idx++]=s1[i];
	}
	s[idx]='\0';
}
int main() {
	int n;
	while(scanf("%d", &n) != -1) {
		int cnt=0;
		if(n==0) break;
		char s1[201], s2[201], s[401];
		scanf("%s %s %s", s1,s2,s);
		int found=0;
		while(cnt<1000){
			cnt++;
			char s12[401];
			merge(s1,s2,s12,n);
			//printf("%s\n", s12);
			if(strcmp(s12,s)==0) {
				found=1;	
				printf("%d\n",cnt);
				break;
			}
			strncpy(s1,s12,n);
			strcpy(s2,s12+n);
		}
		if(!found) printf("-1\n");
	}
}

/*
4
AHAH
HAHA
HHAAAAHH
3
CDE
CDE
EEDDCC
0
*/
