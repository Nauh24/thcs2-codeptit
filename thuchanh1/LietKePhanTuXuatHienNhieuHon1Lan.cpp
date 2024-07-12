#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	int d[100]={0};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		d[a[i]]++;
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(d[a[i]]>1) {
			cnt++;
			d[a[i]]=0;
		}
	}
	printf("%d\n", cnt);
	for(int i=0;i<n;i++){
		d[a[i]]=0;
	}
	for(int i=0;i<n;i++){
		d[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(d[a[i]]>1) {
			printf("%d ", a[i]);
			d[a[i]]=0;
		}
	}
}

