#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d", &n);
		printf("Test %d: ",i);
		for(int j=2;j<=sqrt(n);j++){
			if(n%j==0) {
				int dem=0;
				while(n%j==0){
					n/=j;
					dem++;
				}
				printf("%d(%d) ",j, dem);
				if(n==1) break;
			}
		}
		if(n>1) printf("%d(1)", n);
		printf("\n");
	}
	
}

