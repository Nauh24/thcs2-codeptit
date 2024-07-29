#include<stdio.h>
#include<stdbool.h>
bool check(int n, int k){
	int a[32];
	int len=0;
	while(n>0){
		a[len++]=n%k;
		n /= k;
	}
	for(int i=0;i<len/2;i++){
		if(a[i]!=a[len-1-i]) return false;
	}
	return true;
}
bool check2(int n, int m){
	for(int i=2;i<=m;i++){
		if(!check(n,i)) return false;
	}
	return true;
}
int main() {
	int a,b,m;
	scanf("%d %d %d", &a, &b, &m);
	int cnt=0;
	for(int i=a;i<=b;i++){
		if(check2(i,m)) cnt++;
	}
	printf("%d",cnt);
}
/*
1 356 2      
18 118 13
*/
