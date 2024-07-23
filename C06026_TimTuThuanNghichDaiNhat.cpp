#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool thuanNghich(char s[]){
	int n=strlen(s);
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-1-i]) return false;
	}
	return true;
}
int main() {
	char s[10005];
	char a[1005][1005];
	int n=0;
	int max=0;
	int d[1005]={0};
	while(scanf("%s",s) != -1){
		if(thuanNghich(s)){
			if(strlen(s)>max){
				max=strlen(s);
			}
			int idx=-1;
			for(int i=0;i<n;i++){
				if(strcmp(s,a[i])==0){
					idx=i;
					break;	
				}
			}
			if(idx!=-1) d[idx]++;
			else {
				strcpy(a[n],s);
				d[n]=1;	
				n++;	
			}
		}
	}
	for(int i=0;i<n;i++){
		if(strlen(a[i])==max){
			printf("%s %d\n",a[i],d[i]);
		}
	}
}



