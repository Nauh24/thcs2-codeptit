#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
	char *str1 = (char *)a;
	char *str2 = (char *)b;
	char tmp1[22];
	char tmp2[22];
	
	strcpy(tmp1,str1);
	strcpy(tmp2,str2);
	strcat(tmp1,str2);
	strcat(tmp2,str1);
	
	return strcmp(tmp1,tmp2);
}

int main() {
	int t;
	scanf("%d\n", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		char a[n][11];
		for(int i=0;i<n;i++){
			scanf("%s", a[i]);
		}
		qsort(a,n,11,cmp);
		for(int i=0;i<n;i++){
			printf("%s",a[i]);
		}
	
		printf("\n");
	}
}
/*
5
4 acm ptit for students
5 k duz q rc lvraw
3 a bb cc
5 asf asfi asfi afsi okj
5 ukuy hopji lie jaa dcyi
*/
