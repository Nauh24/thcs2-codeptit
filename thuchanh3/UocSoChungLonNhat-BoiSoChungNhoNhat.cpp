#include<stdio.h>
int ucln(int a, int b){
	if(b==0) return a;
	return ucln(b, a%b);
}
long long bcnn(int a, int b){
	return (long long) a*b/ucln(a,b);
}
int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n%lld", ucln(a,b), bcnn(a,b));
}

