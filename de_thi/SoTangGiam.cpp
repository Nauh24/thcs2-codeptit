#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[20];
		gets(s);
		int n=strlen(s);
		if(n<3) printf("NO");
		else{
			int left=0;
			int ok=0;
			for(int i=0;i<n;i++){
				ok=1;
				if((s[i]-'0')<=left){
					ok=0;
					break;
				} 
				left = (s[i]-'0');
				int right=(s[i]-'0');
				for(int j=i+1;j<n;j++){
					if((s[j]-'0')>=right){
						ok=0;
						break;
					}
					else right=(s[j]-'0');
				}
				if(ok) break; 
			}
			if(ok) printf("YES");
			else printf("NO");
		} 
		
		printf("\n");
	}
}

