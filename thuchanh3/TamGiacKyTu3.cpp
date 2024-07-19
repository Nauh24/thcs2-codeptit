#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int cnt=n-1;
		int tmp=i-1;
		for(int j=1;j<=i;j++){
			printf("%c ",tmp+'A');
			tmp+=cnt;
			cnt--;
		}
		printf("\n");
	}
}

