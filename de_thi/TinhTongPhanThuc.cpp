#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int st;
		if(n%2==1) st=1;
		else st=2;
		double sum=0;
		for(int i=st;i<=n;i+=2){
			sum+=(double)1/i;
		} 
		printf("%.6f", sum);
		printf("\n");
	}
}

