#include<stdio.h>
int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	
	if(n==m) {
		for(int i=0 ;i<n;i++){
			for(int j=0;j<m;j++) printf("%d ", &a[i][j]);
			printf("\n");
		}
	}
	else if(n>m){
		int cnt=0;
		int res = n-m;
		int b[res];
		int tmp = 0;
		for(int i=0;i<res;i++){
			b[i] = tmp;
			tmp+=2; 
		}
		for(int i=0;i<n;i++){
			if(cnt<=res){
				if(i==b[cnt]){
					cnt++;
					continue;
				} 
			}
			for(int j=0;j<m;j++){
				 printf("%d ", a[i][j]);
			}
			printf("\n");
		}
//		for(int i=0;i<res;i++){
//			printf("%d ", b[i-0]);
//		}
	}
	else {
		
		int res= m-n;
		int b[res];
		int tmp=1;
		for(int i=0;i<res;i++){
			b[i] = tmp;
			tmp+=2;
		}
		for(int i=0;i<n;i++){
			int cnt=0;
			for(int j=0;j<m;j++){
				if(cnt<=res){
					if(j==b[cnt]){
						cnt++;
						continue;
					} 
				}
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}

/*
6 4
2 8 7 6
6 3 2 6
4 8 2 1
9 9 9 8
2 1 8 3
2 3 4 4

4 6
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
*/
