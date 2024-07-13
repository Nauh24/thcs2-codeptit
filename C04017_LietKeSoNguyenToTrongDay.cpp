#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main() {

		int n;
		scanf("%d",&n);
		int a[n];
		int d[100]={0};
		int cnt=0;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(isPrime(a[i])){
				cnt++;
				d[a[i]]++;
			} 
		}
		printf("%d ",cnt);
		for(int i=0;i<n;i++){
			if(d[a[i]]>0){
				printf("%d ",a[i]);

			}
		}
}

