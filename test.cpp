#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n,m;
		scanf("%d %d\n", &n, &m);
		int a[n][m];
		int row_count[1000][3]={0};
		int col_count[1000][3]={0};

		char tmp[1001];
		for(int i=0;i<n;i++){
			gets(tmp);
			for(int j=0;j<m;j++){
				a[i][j]= tmp[j] - '0';
				if(a[i][j]!=0) {
				row_count[i][a[i][j]]++;
				col_count[j][a[i][j]]++;
				}
			}
		}
//		for(int i=0;i<n;i++){
//			for(int j=0;j<3;j++){
//				printf("%d ",col_count[i][j]);
//			}
//			printf("\n");
//		}
		long long cnt=0;
		for(int i=0 ;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]!=0){
					int p2=a[i][j];
					for(int c=1;c<=2;c++){
						if(p2!=c){
							cnt+= row_count[i][c] * col_count[j][c];
						}
					}
				}
			}
		}
		printf("%lld", cnt);
		printf("\n");
	}
}
/*
1
3 3
000
201
002
*/

