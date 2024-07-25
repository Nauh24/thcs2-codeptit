#include<stdio.h>
#include<stdbool.h>
bool check(int n){
	int res=0;
	int ans=n;
	while(n>0){
		int x=n%10;
		if(x==9) return false;
		res=res*10+x;
		n/=10;
	}
	return res==ans;
}
int main() {
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(int i=2;i<n;i++){
		if(check(i)){
			cnt++;
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("%d",cnt);
}

