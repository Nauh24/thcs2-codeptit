#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int idx=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			idx+=i-1;
			int k=idx;
			idx++;
			for(int j=1;j<=i;j++){
				printf("%c ",(k--)+'a');
			} 
		}
		else {
			for(int j=1;j<=i;j++){
				printf("%c ",(idx++)+'a');
			}
		}
		printf("\n");
	}
}

