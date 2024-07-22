#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	int k=1;
	while(t--){
		int n;
	scanf("%d", &n);
	int a[n+1][n+1];
	int top=1,bottom=n, left=1, right=n;
	int x=n*n;
	while(x>0){
		for(int i=left;i<=right;i++) a[top][i]=x--;
		top++;
		for(int i=top;i<=bottom;i++) a[i][right] = x--;
		right--;
		for(int i=right;i>=left;i--) a[bottom][i] = x--;
		bottom--;
		for(int i=bottom;i>=top;i--) a[i][left] =  x--;
		left++;
	}
		printf("Test %d:\n",k++);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		 printf("\n");
	}
	
		printf("\n");
	}
	
}

