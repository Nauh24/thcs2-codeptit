#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int tmp;
	for(int i=1;i<=n;i++){
		tmp=1;
		for(int j=1;j<=i;j++){
			printf("%d",tmp);
			tmp+=2;
		}
		if(i!=1){
			tmp-=4;
			for(int j=1;j<=i-1;j++){
				printf("%d",tmp);
				tmp-=2;
			}
		}
		printf("\n");
	}
}

