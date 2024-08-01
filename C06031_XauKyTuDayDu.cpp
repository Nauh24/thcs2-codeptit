#include<stdio.h>
#include<string.h>
int main() {
	char s[50];
	scanf("%s",s);
	int a[50];
	a[0]=1;
	for(int i=0;i<strlen(s);i++){
		int max=0;
		for(int j=0;j<i;j++){
			if(s[j] < s[i] && a[j]>max){
				max=a[j];
			}
		}
		a[i] = max+1;
	}
	int tmp=0;
	for(int i=0 ;i<strlen(s);i++){
		if(a[i]>tmp) tmp=a[i];
	}
	printf("%d", 26-tmp);
}

