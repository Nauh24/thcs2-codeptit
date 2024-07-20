#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ok;
	int idx=1;
	while(1){
		ok=0;
		for(int i=0;i<n-1;i++){
			if(a[i+1]<a[i]){
				int tmp=a[i+1];
				a[i+1]=a[i];
				a[i]=tmp;
				ok=1;
			}
		}
		if(!ok) break;
		printf("Buoc %d: ",idx);
		idx++;
		for(int i=0;i<n;i++) printf("%d ",a[i]);
		printf("\n");
	}
	
}

