#include<stdio.h>
#include<math.h>
int sumCs(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int sumNt(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			sum+=sumCs(i);
			n/=i;
		}
	}
	if(n==1) return sum;
	else return sum+sumCs(n);
}
int main() {
	int n;
	scanf("%d", &n);
	if(sumCs(n)==sumNt(n)) printf("YES");
	else printf("NO");
}

