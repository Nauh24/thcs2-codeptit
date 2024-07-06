#include<stdio.h>
int check(int n){
	int sum=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) sum=sum+i+n/i;
		if(i*i==n) sum-=i;
 	} 
 	return sum;
}
int main() {
	int n;
	scanf("%d", &n);
	for(int i=2;i<n;i++){
		if(check(i)==i) printf("%d ", i);
	}
}

