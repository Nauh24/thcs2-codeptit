#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) {
			return false;
		}
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	for(int j=1;j<=t;j++){
		printf("Test %d:\n", j);
		int n;
		scanf("%d", &n);
		
		int a[n];
		int d[100001]={0};
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(isPrime(a[i])){
				d[a[i]]++;
			} 
		}
		for(int i=2;i<=100000;i++){
			if(d[i]>0)
			printf("%d xuat hien %d lan\n",i, d[i]);
		}
		printf("\n");
	}
		
	
}

