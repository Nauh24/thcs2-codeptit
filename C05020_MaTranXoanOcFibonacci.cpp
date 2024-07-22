#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int a[n][n];
	int f[100];
	f[0]=0,f[1]=1;
	for(int i=2;i<n*n;i++) f[i]=f[i-1]+f[i-2];
	int top=0,bottom=n-1, left=0, right=n-1;
	int x=0;
	while(x<n*n){
		for(int i=left;i<=right;i++) a[top][i]=f[x++];
		top++;
		for(int i=top;i<=bottom;i++) a[i][right] = f[x++];
		right--;
		for(int i=right;i>=left;i--) a[bottom][i] = f[x++];
		bottom--;
		for(int i=bottom;i>=top;i--) a[i][left] =  f[x++];
		left++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		 printf("\n");
	}
}

