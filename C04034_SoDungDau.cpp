#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int idx=0;
		int b[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n-1;i++){
			int ok=1;
			for(int j=i+1;j<n;j++){
				if(a[i]<=a[j]){
					ok=0;
					break;
				}
			}
			if(ok) {
				b[idx++]=a[i];
			}
		}
		b[idx++]=a[n-1];
		for(int i=0;i<idx-1;i++){
			for(int j=i+1;j<idx;j++){
				if(a[j]>a[i]){
					int tmp=a[j];
					a[j]=a[i];
					a[i]=tmp;
				}
			}
		}
		for(int i=0;i<idx;i++) {
			printf("%d ",b[i]);
		}
		printf("\n");
	}
}

