#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d", &n);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int j=i;
			while(n%j==0){
				printf("%d",j);
				n/=j;
				if(n!=1) printf("x");
			}
		}
	}
	if(n!=1) printf("%d",n);
}

