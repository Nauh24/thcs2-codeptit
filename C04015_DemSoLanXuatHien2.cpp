#include<stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int j=1;j<=t;j++){
		int n;
		scanf("%d",&n);
		int a[n];
		int d[100001]={0};
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			d[a[i]]++;
		}
		printf("Test %d:\n",j);
		for(int i=0;i<n;i++){
			if(d[a[i]]>0) {
				printf("%d xuat hien %d lan\n",a[i],d[a[i]]);
				d[a[i]]=0;
			}
		}
		printf("\n");
	}
}

