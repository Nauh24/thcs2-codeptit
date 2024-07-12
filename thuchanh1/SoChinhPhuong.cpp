#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int x=sqrt(n);
		if(x*x==n) printf("YES");
		else printf("NO");
		printf("\n");
	}
}

