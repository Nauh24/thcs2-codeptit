#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p;
		int cnt=0;
		scanf("%d %d",&n,&p);
		for(int i=1;i<=n;i++){
			int tmp=i;
			while(tmp%p==0){
				cnt++;
				tmp/=p;
			}
		}
		printf("%d",cnt);
		printf("\n");
	}
}

