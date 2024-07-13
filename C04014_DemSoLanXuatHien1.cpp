#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	int d[100]={0};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		d[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(d[a[i]]>0) {
			printf("%d %d\n",a[i],d[a[i]]);
			d[a[i]]=0;
		}
	}
}

