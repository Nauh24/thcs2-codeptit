#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p;
		scanf("%d %d",&n,&p);
		int tmp=0;
		for(int i=1;i<=n;i++){
			if(i%p==0){
				int j=i;
			while(j%p==0){
				tmp++;
				j/=p;
			}
			}
			
		}
		printf("%d",tmp);
		printf("\n");
	}
}

