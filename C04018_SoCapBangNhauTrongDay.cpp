#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		int cnt=0;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i]==a[i-1]) cnt++;
		}
		printf("%d", cnt);
		printf("\n");
	}
}

