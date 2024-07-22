#include<stdio.h>
int p[1000006];
int d[1000006];

void sieve(){
	for(int i=0;i<=1e6;i++) d[i]=1;
	for(int i=2;i*i<=1e6;i++){
		if(d[i]==1) {
			for(int j=i*i;j<=1e6;j+=i) d[j]=0;
		}
	}	
	int k=0;
	for(int i=2;i<=1e6;i++){
		if(d[i]) p[k++]=i;
	}
}
int main() {
	int t;
	scanf("%d",&t);
	int k=1;
	sieve();
	while(t--){
		
		int n;
	scanf("%d", &n);
	int a[n+1][n+1];
	int top=1,bottom=n, left=1, right=n;
	int x=0;
	while(x<n*n){
		for(int i=left;i<=right;i++) a[top][i]=p[x++];
		top++;
		for(int i=top;i<=bottom;i++) a[i][right] = p[x++];
		right--;
		for(int i=right;i>=left;i--) a[bottom][i] = p[x++];
		bottom--;
		for(int i=bottom;i>=top;i--) a[i][left] =  p[x++];
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

