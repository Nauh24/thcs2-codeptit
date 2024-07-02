#include<stdio.h>

int uscln(int a, int b){
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b;
		scanf("%d %d", &a, &b);
		int x=uscln(a,b);
		printf("%d",x);
		printf("\n");
	}
}

