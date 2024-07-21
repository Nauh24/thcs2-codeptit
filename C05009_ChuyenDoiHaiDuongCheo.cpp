#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		int tmp=a[i][i];
		a[i][i]=a[i][n-i+1];
		a[i][n-i+1]=tmp;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

