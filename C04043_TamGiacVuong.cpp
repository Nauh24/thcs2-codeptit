#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef long long ll;
void sort(ll a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
}
bool check(ll a[], int n){
	for(int i=0;i<n;i++){
		a[i]=a[i]*a[i];
	}
	
	for(int i=n-1;i>=2;i--){
		int l=0, r=i-1;
		while(l<r){
			if(a[l]+a[r]==a[i]) return true;
			else if(a[l]+a[r]<a[i]) l++;
			else r--;
		}
	}
	return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		ll a[n];
		for(int i=0;i<n;i++){
			scanf("%lld", &a[i]);
		}
		sort(a,n);
		if(check(a,n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}

