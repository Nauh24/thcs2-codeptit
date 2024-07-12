#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int cnt;
	int dem=0;
	for(int i=1;i<=n;i++){
		cnt=0;
		for(int j=1;j<=n-i+1;j++){
			printf("%c", 'A'+j+dem-1+cnt);
			cnt+=1;
		}
		dem+=2;
		printf("\n");
	}
}

