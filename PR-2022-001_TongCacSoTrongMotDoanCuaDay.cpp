#include<stdio.h>
int main() {
	int u,d,n;
	scanf("%d %d %d", &u, &d, &n);
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=u;
		u+=d;
	}
	printf("%d",sum);
}

