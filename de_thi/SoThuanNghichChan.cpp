#include<stdio.h>
#include<stdbool.h>
bool check(int n){
	int sum=0;
	int ans=n;
	int cnt=0;
	while(n>0){
		int d=n%10;
		if(d%2==1) return false;
		sum=sum*10+d;
		cnt++;
		n/=10;
	}
	return sum==ans && cnt%2==0;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i=22;i<n;i++){
			if(check(i)) printf("%d ",i);
		}
		printf("\n");
	}
}
/*
2
30
100
*/
