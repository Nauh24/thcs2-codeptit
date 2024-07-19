#include<stdio.h>
#include<stdbool.h>
bool check(int n){
	int d=n%10;
	n/=10;
	while(n>0){
		if(n%10<=d) return false;
		d=n%10;
		n/=10;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b;
		scanf("%d %d", &a, &b);
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(check(i)) cnt++;
		}
		printf("%d", cnt);
		printf("\n");
	}
}

