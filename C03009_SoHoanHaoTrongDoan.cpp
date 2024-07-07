#include<stdio.h>
#include<math.h>
int check(int n){
	int res=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) res=res+i+n/i;
		if(i*i==n) res-=i;
	}
	return res==n;
}
int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	int tmp;
	if (a>b) {
		tmp=b;
		b=a;
		a=tmp;
	}
	for(int i=a;i<=b;i++){
		if(check(i)) printf("%d ",i);
	}
}

