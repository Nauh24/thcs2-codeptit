#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int gt=b;
	if(gt<a) gt=a;
	for(int i=1;i<=a;i++){
		int j=gt;
		int kt=0, dem=0;
		while(dem<b){
			if(j==1) {
				kt=1;
				dem++;
				printf("%d", j);
				j++;
				continue;
			}
			if(kt==0){
				printf("%d",j);
				j--;
				dem++;
				continue;
			}
			if(kt==1){
				printf("%d", j);
				j++;
				dem++;
				continue;
			}
		}
		printf("\n");
		gt--;
	}
}

