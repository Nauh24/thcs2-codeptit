#include<stdio.h>
#include<string.h>
int compare(char a[], char b[]){
	int n1=strlen(a);
	int n2=strlen(b);
	if(n1>n2) return 1;
	if(n2>n1) return -1;
	return strcmp(a,b);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		char a[1005], b[1005];
		scanf("%s %s",a, b);
		if(compare(a,b)<0){
			char tmp[1005];
			strcpy(tmp,a);
			strcpy(a,b);
			strcpy(b,tmp);
		}
		int i=strlen(a);
		int j=strlen(b);
		char res[1005];
		int n=i;
		int r=0;
		while(j>=0){
			int d=(a[i--]-'0')-(b[j--]-'0')-r;
			if(d<0){
				d+=10;
				r=1;
			}
			else r=0;
			res[n--]=d%10+'0';
		}
		while(i>=0){
			int d=(a[i--]-'0')-r;
			if(d<0){
				d+=10;
				r=1;
			}
			else r=0;
			res[n--]=d%10+'0';
		}
		n=strlen(a);
		int idx=0;
		while(res[idx]=='0'){
			idx++;
		}
		for(int i=idx;i<n;i++){
			printf("%c",res[i]);
		}
		printf("\n");
	}
}


