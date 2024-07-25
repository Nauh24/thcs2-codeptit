#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int cnt=n-1;
		int tmp=i-1;
		printf("%c ",tmp+'A');
		for(int j=2;j<=i;j++){
			printf("%c ",'A'+tmp+cnt);
			tmp+=cnt;
			cnt--;
		}
		printf("\n");
	}
}

