#include<stdio.h>
#include<string.h>

int main() {
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[20];
		gets(s);
		int n=strlen(s);
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(s[j]<s[i]){
					char tmp=s[j];
					s[j]=s[i];
					s[i]=tmp;
				}
			}
		}
		int idx=0;
		while(s[idx]=='0'){
			idx++;
		}
		for(int i=idx;i<n;i++) printf("%c",s[i]);
		printf("\n");
	}
}

/*
2
347120
44774477
*/
