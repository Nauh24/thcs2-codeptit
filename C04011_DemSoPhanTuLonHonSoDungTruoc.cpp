#include<stdio.h>
#include<stdbool.h>
bool check(int a[], int i){
	for(int j=0;j<i;j++){
		if(a[i]<a[j]) return false;
	}
	return true;
}
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
			if(check(a,i)) cnt++;
		}
		printf("%d", cnt);
		printf("\n");
	}
}

