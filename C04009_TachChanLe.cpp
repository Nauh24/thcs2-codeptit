#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	int c[100], l[100], j=0, k=0;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]%2==0) {
			c[j++] = a[i];
		}
		else {
			l[k++]=a[i];
		}
	}
	for(int i=0;i<j;i++) printf("%d ", c[i]);
	printf("\n");
	for(int i=0;i<k;i++) printf("%d ", l[i]);
}
