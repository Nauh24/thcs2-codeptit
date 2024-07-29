#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a, const void *b){
	return strcmp((char *)a, (char *)b);
}
void toLower(char s[]){
	for(int i=0;i<strlen(s);i++) s[i]=tolower(s[i]);
}
//void sort(char a[1001][1001], int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(strcmp(a[i],a[j])>0){
//				char tmp[1001];
//				strcpy(tmp,a[j]);
//				strcpy(a[j],a[i]);
//				strcpy(a[i],tmp);
//			}
//		}
//	}
//}
int main() {
	char s1[1001];
	char s2[1001];
	gets(s1);
	gets(s2);
	toLower(s1);
	toLower(s2);
	char *token1=strtok(s1," ");
	int n1=0;
	char a[1001][1001];
	int 
	while(token1!=NULL){
		strcpy(a[n1++],token1);
		token1=strtok(NULL," ");
	}
	qsort(a,n1,1001,cmp);
	
	char *token2=strtok(s2," ");
	int n2=0;
	char b[1001][1001];
	while(token2!=NULL){
		strcpy(b[n2++],token2);
		token2=strtok(NULL," ");
	}
	qsort(b,n2,1001,cmp);
	char hop[2002][1001];
	int idx=0;
	for(int i)
	for(int i=0;i<n1;i++) printf("%s ",a[i]);
}
/*
Lap trinh huong doi tuong
Ngon ngu lap trinh C++
*/
