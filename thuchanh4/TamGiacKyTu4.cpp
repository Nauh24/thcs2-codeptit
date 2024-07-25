#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		char tmp='@';
		for(int j=1;j<=i;j++){
			printf("%c",tmp);
			tmp+=2;
		}
		tmp-=4;
		for(int j=2;j<=i;j++){
			printf("%c",tmp);
			tmp-=2;
		}
		printf("\n");
	}
}

