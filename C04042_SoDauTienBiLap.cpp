#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int ok=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					printf("%d",a[i]);
					ok=1;
					break;
				}
			}
			if(ok==1) break;
		}
		if(!ok) printf("NO");
		printf("\n");
	}
}

