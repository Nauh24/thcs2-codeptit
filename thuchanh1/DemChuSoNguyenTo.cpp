#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main() {
	char s[20];
	scanf("%s", &s);
	int d[10]={0};
	for(int i=0;i<strlen(s);i++){
		int x= s[i] -'0';
		if(isPrime(x)) d[x]++;
	}
	for(int i=0;i<strlen(s);i++){
		if(d[s[i]-'0']>0) printf("%c %d\n",s[i], d[s[i]-'0']);
		d[s[i]-'0']=0;
	}
}

