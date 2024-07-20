#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	int idx=1;
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int b[n];
		b[0]=1;
		scanf("%d",&a[0]);
		int maxx=0;
		for(int i=1;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>a[i-1]){
				b[i]=b[i-1]+1;
			}
			else b[i]=1;
			if(b[i]>maxx) maxx=b[i];
		}
		printf("Test %d:\n",idx);
		idx++;
		printf("%d\n",maxx);
		for(int i=0;i<=n-maxx;i++){
			if(b[i+maxx-1]==maxx){
				for(int j=0;j<maxx;j++){
					printf("%d ",a[i+j]);
				}
				printf("\n");
				i+=maxx-1;
			}
		}
		printf("\n");
	}
	
}

