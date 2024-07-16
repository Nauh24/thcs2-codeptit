#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main() {
	char s[11];
	gets(s);
	int n=strlen(s);
	int d[11]={0};
	for(int i=0;i<n;i++){
		if(isPrime(s[i]-'0')){
			d[s[i]-'0']++;
		}
	}
	for(int i=0;i<n;i++){
		int x=s[i]-'0';
		if(d[x]>0){
			printf("%d %d\n",x,d[x]);
			d[x]=0;
		}
	}
}

