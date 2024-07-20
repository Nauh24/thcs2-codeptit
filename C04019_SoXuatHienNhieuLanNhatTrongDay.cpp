#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		int d[100000] ={0};
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			d[a[i]]++;
		}
		int max=-1e9;
		for(int i=0;i<n;i++){
			if(d[a[i]]>max) max=d[a[i]];
		}
		for(int i=0;i<n;i++){
			if(d[a[i]]==max && d[a[i]]>0) {
				printf("%d ",a[i]);
				d[a[i]]=0;
			}
		}
		printf("\n");
	}
}

