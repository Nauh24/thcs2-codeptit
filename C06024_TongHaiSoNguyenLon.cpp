#include<stdio.h>
#include<string.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		char a[505], b[505];
		scanf("%s %s",&a,&b);
		
		if(strlen(a)<strlen(b)){
			char tmp[505];
			strcpy(tmp,b);
			strcpy(b,a);
			strcpy(a,tmp);
		}
		
		//printf("%s %s\n",a, b);
		int i=strlen(a)-1;
		int j=strlen(b)-1;
		char res[505];
		int r=0;
		int n=i;
		while(j>=0){
			int d=(a[i--]-'0')+(b[j--]-'0')+r;
			r=d/10;
			res[n--]=(d%10)+'0';
		}
		while(i>=0){
			int d=(a[i--]-'0')+r;
			r=d/10;
			res[n--]=(d%10)+'0';
		}
		if(r==1) printf("1");
		
		for(int i=0;i<strlen(a);i++) {
			printf("%c",res[i]);
		}
		printf("\n");
	}
}



