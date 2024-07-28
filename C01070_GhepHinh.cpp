#include<stdio.h>
int max(int a, int b){
	return a>b ? a:b;
}
int canFormSquare(int a1, int b1, int a2, int b2, int a3, int b3){
	if(b1==b2 && b2==b3 && b1==(a1+a2+a3)) return 1;
	if(a1==a2 && a2==a3 && a1==(b1+b2+b3)) return 1;
	
	int side=max(a1+a2,max(a1+a3,a2+a3));
	if( (b1==b2 && b1+b3==side && a3==side) ||
		(b1==b3 && b1+b2==side && a2==side) ||
		(b2==b3 && b2+b1==side && a1==side)) return 1;
	side = max(b1+b2, max(b1+b3, b2+b3));
	if( (a1==a2 && a1+a3==side && b3==side) ||
		(a1==a3 && a1+a2==side && b2==side) ||
		(a2==a3 && a2+a1==side && b1==side)) return 1;
	return 0;
}
int main() {
	int a1,b1, a2, b2, a3, b3;
	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b1);
	scanf("%d %d", &a3, &b3);
	if(canFormSquare(a1,b1,a2,b2,a3,b3)) printf("YES");
	else printf("NO");
}


