#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	int d[100]={0};
	int idx=0;
	int b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		d[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(d[a[i]]>1){
			b[idx++]=a[i];
			d[a[i]]=0;
		}
	}
	printf("%d\n",idx);
	for(int i=0;i<idx;i++){
		printf("%d ",b[i]);
	}
}

