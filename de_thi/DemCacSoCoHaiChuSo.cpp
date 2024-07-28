#include<stdio.h>
#include<string.h>
int main() {
	char s[1001];
	gets(s);
	int d[100]={0};
	int n=0;
	int a[501];
	int len=strlen(s);
	for(int i=0;i<len-2;i+=2){
		int num=(s[i]-'0')*10+(s[i+1]-'0');
		d[num]++;
		a[n++]=num;
	}
	if(len%2==0){
		int num=(s[len-2]-'0')*10+(s[len-1]-'0');
		d[num]++;
		a[n++]=num;
	}
	for(int i=0;i<n;i++){
		if(d[a[i]]>0){
			printf("%d %d\n",a[i],d[a[i]]);
			d[a[i]]=0;
		}
		
	}
}
/*
124356141111434356149
*/
