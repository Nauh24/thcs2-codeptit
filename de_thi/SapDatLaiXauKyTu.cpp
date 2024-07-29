#include<stdio.h>
#include<string.h>

int main() {
	int t;
	scanf("%d\n", &t);
	int k=1;
	while(t--){
		char s1[1001], s2[1001];
		gets(s1);
		gets(s2);
		int n1=strlen(s1);
		int n2=strlen(s2);
		printf("Test %d: ",k++);
		if(n1!=n2) printf("NO");
		else {
			int d1[256]={0};
			int d2[256]={0};
			for(int i=0;i<n1;i++){
				d1[s1[i]]++;
				d2[s2[i]]++;
			}			
//			for(int i=0;i<n1;i++){
//				printf("%c %d",s1[i],d[s1[i]]);
//				printf("\n");
//			}	
			int ok=1;
			for(int i=0;i<n2;i++){
				if(d2[s2[i]]!=d1[s2[i]]){
					ok=0;
					break;
				}
			}
			if(ok) printf("YES");
			else printf("NO");
		}
		printf("\n");
	}
}
/*
4
testing
intestg
abc
aabbbcccc
abcabcbcc
aabbbcccc
abc
xyz
*/
