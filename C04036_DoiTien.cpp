#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int cnt=0;
		int a[10]={1,2,5,10,20,50,100,200,500,1000};
		int idx=9;
		for(int i=9;i>=0;i--){
			if(n>=a[i]){
				while(n>=a[i]){
					cnt++;
					n-=a[i];
				}
			}
		}
		printf("%d",cnt);
		printf("\n");
	}
}

