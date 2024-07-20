#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		int min=a[i];
		int idx=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<min) {
				idx=j;
				min=a[j];
			}
		}
		if(idx!=i) {
			int tmp=a[idx];
			a[idx]=a[i];
			a[i]=tmp;
		}
		for(int j=0;j<n;j++) printf("%d ",a[j]);
		printf("\n");
	}
}

