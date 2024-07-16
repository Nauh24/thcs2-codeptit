#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[205];
		scanf("%s",&s);
		if(strlen(s)==1) printf("%s",s);
		else{
			while(strlen(s)>1){
				int l=strlen(s);
				int mid=l/2;
				char left[205]={}, right[205]={};
		//		memset(left,0,sizeof(left));
		//		memset(right,0,sizeof(right));
				strncpy(left,s,mid);
				strcpy(right,s+mid);
				int a=atoi(left);
				int b=atoi(right);
				//printf("%d %d\n",a,b);
				int sum=a+b;
				//printf("%d\n",sum);
				
				sprintf(s,"%d",sum);
				printf("%s\n",s);
			}
		}
		
		printf("\n");
	}
}

	
	


