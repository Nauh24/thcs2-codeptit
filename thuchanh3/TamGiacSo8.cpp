#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int idx=1;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			idx+=i-1;
			int k=idx;
			idx++;
			for(int j=1;j<=i;j++){
				printf("%d ",k--);
			} 
		}
		else {
			for(int j=1;j<=i;j++){
				printf("%d ",idx++);
			}
		}
		printf("\n");
	}
}

