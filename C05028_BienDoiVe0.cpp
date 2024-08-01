#include<stdio.h>
void swap(int a[11][11], int i, int j){
	for(int x=1;x<=i;x++){
		for(int y=1;y<=j;y++) a[x][y] = 1 - a[x][y];
	}
}
int main() {
	int n;
	scanf("%d\n", &n);
	int a[11][11];
	char tmp[100];
	for(int i=1;i<=n;i++){
		gets(tmp);
		for(int j=1;j<=n;j++){
			a[i][j]= tmp[j-1]-'0';
		}
	}
	int cnt=0;
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			if(a[i][j]==1){
				swap(a,i,j);
				cnt++;
			}
		}
	}
	printf("%d",cnt);
}
/*
3
001
111
111
*/

