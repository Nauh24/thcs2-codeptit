#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int tmp=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=tmp;j++){
			printf("%d",j);
		}
		tmp+=2;
		printf("\n");
	}
}

