#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int d[101];
		int a[101];
		int j=0;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i]%2==0) d[j++] = a[i];
		}
		for(int i=0;i<j;i++){
			printf("%d ", d[i]);
		}
		
		printf("\n");
	}
}

