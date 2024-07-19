#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool prime(int n){
	if(n<2) return false;
	for(int i=2; i <=sqrt(n) ;i++) {
		if(n%i==0) return false;
	}
	return true;
}
int main() {
	int n;
	scanf("%d", &n);
	for(int i=2;i<n;i++){
		if(prime(i)) printf("%d\n", i);
	}
}

