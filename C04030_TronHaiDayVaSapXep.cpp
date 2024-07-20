#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	int idx=1;
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]<a[i]){
					int tmp=a[j];
					a[j]=a[i];
					a[i]=tmp;
				}
				if(b[j]>b[i]){
					int tmp=b[j];
					b[j]=b[i];
					b[i]=tmp;
				}
			}
		}
		printf("Test %d:\n",idx);
		idx++;
		int c=0, l=0;
		for(int i=0;i<n;i++){
			printf("%d ",a[c++]);
			printf("%d ",b[l++]);
		}
		printf("\n");
	}
}

