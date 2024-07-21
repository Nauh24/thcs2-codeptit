#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	int k=1;
	while(t--){
		int m,n;
		scanf("%d %d", &m, &n);
		int a[m+1][n+1];
		int b[m][n+1];
		int idx=0;
		int sum,max=0;
		for(int i=1;i<=m;i++){
			sum=0;
			for(int j=1;j<=n;j++){
				scanf("%d", &a[i][j]);
				sum+=a[i][j];
			}
			if(sum>max){
				max=sum;
				idx=i;
			}
		}
		max=0;
		int idx2=0;
		for(int j=1;j<=n;j++){
			sum=0;
			for(int i=1;i<=m;i++){
				if(i==idx) continue;
				sum+=a[i][j];
			}
			if(sum>max){
				max=sum;
				idx2=j;
			}
		}
		printf("Test %d:\n",k++);
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(i==idx || j==idx2) continue;
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

