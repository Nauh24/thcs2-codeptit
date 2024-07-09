#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int  cut(char x){
	if(x=='0' || x=='8' || x=='9') return 0;
	if(x=='1') return 1;
	 return -1;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", &s);
		int l=strlen(s);
		long long res=0;
		bool ok=true;
		for(int i=0;i<l;i++){
			int x=cut(s[i]);
			if(x==-1) {
				printf("INVALID");
				ok=false;
				break;
			}
			res=res*10+x;
		}
		if(ok){
			if(res==0) printf("INVALID");
		else printf("%lld", res);
		}
		
		printf("\n");
	}
}

