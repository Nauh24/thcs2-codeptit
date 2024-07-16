#include<stdio.h>
#include<math.h>
#define MAX 2000000
int a[MAX+1];
void sieve(){
	for(int i=2;i<=MAX;i++){
		a[i]=i;
	}
	for(int i=2;i<=sqrt(MAX);i++){
		for(int j=i*i;j<=MAX;j+=i){
			if(a[j]==j) a[j]=i;
		}
	}
}

int tong(int n){
	int sum=0;
	while(n!=1){
		sum+=a[n];
		n/=a[n];
	}
	return sum;
}
int main(){
	sieve();
	int n;
	scanf("%d",&n);
	long long d=0;
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		d+=tong(x);
	}
	printf("%lld",d);
}
