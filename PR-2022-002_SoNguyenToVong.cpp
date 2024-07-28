#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
bool isCircularPrime(int n){
	char s[20];
	sprintf(s,"%d",n);
	int len=strlen(s);
	for(int i=0;i<n;i++){
		int num=atoi(s);
		if(!isPrime(num)) return false;
		char tmp=s[0];
		for(int j=0;j<len-1;j++){
			s[j]=s[j+1];
		}
		s[len-1]=tmp;
	}
	return true;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(isPrime(n) && isCircularPrime(n)) printf("1 ");
		else printf("0 ");

	}
}

