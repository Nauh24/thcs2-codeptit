#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n,m;
		scanf("%d %d", &n, &m);
		int a[n][m];
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)	
			 scanf("%d", &a[i][j]);
		}
//		int ans[n*m];
//		for(int i=0;i<n*m;i++){
//			scanf("%d", &ans[i]);
//		}
		int row1=0, row2=n-1;
		int col1=0, col2=m-1;
		int b[n*m];
		int idx=0;
		while(row1<=row2 && col1<=col2) {
			for(int j=col1;j<=col2;j++) b[idx++] = a[row1][j];
			row1++;
			for(int j=row1;j<=row2;j++) b[idx++] = a[j][col2];
			col2--;
			for(int j=col2;j>=col1;j--) b[idx++] = a[row2][j];
			row2--;
			for(int j=row2;j>=row1;j--) b[idx++] = a[j][col1];
			col1++;
		}
		for(int i=0;i<n*m;i++){
			printf("%d ", b[i]);
		}
		printf("\n");
	}
}

