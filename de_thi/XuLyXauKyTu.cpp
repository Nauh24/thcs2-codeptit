#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void to_lower(char s[]){
	for(int i=0;i<strlen(s);i++) s[i]=tolower(s[i]);
}

int cmp(const void *a, const void *b){
	return strcmp((char *)a, (char *)b);
}
void in(char s[][1001], int n){
	for(int i=0 ;i<n;i++){
		 printf("%s ",s[i]);
	}
	printf("\n");
}

int erase(char s[][1001], int n){
	int idx=0;
	for(int i=0;i<n;i++){
		if(i==0 || strcmp(s[i],s[i-1])!=0) strcpy(s[idx++],s[i]);
	}
	return idx;
}

int main() {
	char s1[1001], s2[1001];
	gets(s1);
	gets(s2);

	char set1[500][1001], set2[500][1001];
	int n1=0, n2=0;
	
	
	to_lower(s1);
	to_lower(s2);

	char *token1 = strtok(s1, " ");
    while (token1 != NULL) {
        strcpy(set1[n1++], token1);
        token1 = strtok(NULL, " ");
    }

    char *token2 = strtok(s2, " ");
    while (token2 != NULL) {
        strcpy(set2[n2++], token2);
        token2 = strtok(NULL, " ");
    }

	qsort(set1,n1,sizeof(set1[0]),cmp);
	qsort(set2,n2,sizeof(set2[0]),cmp);
	
	int idx1=erase(set1,n1);

	int idx2=erase(set2,n2);

	char hop[1000][1001], giao[60][1001];
	int i=0, j=0;
	int cnt1=0, cnt2=0;
	//printf("%d %d\n", idx1, idx2);
	while(i<idx1 && j<idx2){
		int x=strcmp(set1[i],set2[j]);
		if(x<0){
			strcpy(hop[cnt1++],set1[i++]);
		} 
		else if(x>0){
			strcpy(hop[cnt1++],set2[j++]);
		} 
		else {
			strcpy(hop[cnt1++], set1[i]);
			strcpy(giao[cnt2++], set1[i]);
			i++;
			j++;
		}
	}
	
	while(i<idx1) strcpy(hop[cnt1++], set1[i++]);
	while(j<idx2) strcpy(hop[cnt1++], set2[j++]);
//	in(set1,idx1);
//	in(set2,idx2);
	in(hop,cnt1);
	in(giao,cnt2);
}
/*
Lap trinh Huong tuong doi tuong 
Ngon ngu ngOn laP trinh C++
*/
