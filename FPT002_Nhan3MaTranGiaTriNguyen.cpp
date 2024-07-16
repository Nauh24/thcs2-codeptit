#include<stdio.h>
void mul(int a[][100], int b[][100], int c[][100], int m,int n,int p){
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			c[i][j]=0;
			for(int k=0;k<n;k++) c[i][j]+=a[i][k]*b[k][j];
		}
	}
}
int main() {
	int m,n,p,q;
	scanf("%d %d %d %d",&m, &n, &p, &q);

	
	int a[100][100], b[100][100], c[100][100];
    int x[100][100], d[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++) scanf("%d", &b[i][j]);
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++) scanf("%d", &c[i][j]);
	}
	mul(a,b,x,m,n,p);
	mul(x,c,d,m,p,q);
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}

