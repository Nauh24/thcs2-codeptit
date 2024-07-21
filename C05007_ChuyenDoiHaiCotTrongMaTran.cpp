#include<stdio.h>
int main() {
	int m,n;
	scanf("%d %d",&m, &n);
	int a[m+1][n+1];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int x,y;
	scanf("%d %d", &x, &y);
	for(int i=1;i<=m;i++){
		int tmp=a[i][x];
		a[i][x]=a[i][y];
		a[i][y]=tmp;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++) printf("%d ",a[i][j]);
		printf("\n");
	}
}

