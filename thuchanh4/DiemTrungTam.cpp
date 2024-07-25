#include<stdio.h>
int main() {
	 int n;
	 scanf("%d", &n);
	 int d[100005]={0};
	 for(int i=1;i<n;i++){
	 	int a,b;
	 	scanf("%d %d", &a, &b);
	 	d[a]++;
	 	d[b]++;
	 }
	 for(int i=1;i<=n;i++){
	 	if(d[i]!=1 && d[i]!=n-1) {
	 		printf("No\n");
	 		return 0;
		 }
	 }
	 printf("Yes\n");
	return 0;
}

