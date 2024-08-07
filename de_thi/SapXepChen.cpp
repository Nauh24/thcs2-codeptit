#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("Buoc 0: %d",a[0]);
	printf("\n");
	for(int i=1;i<n;i++){
		printf("Buoc %d: ",i);
		for(int j=0;j<i;j++){
			for(int k=j+1;k<=i;k++){
				if(a[k]<a[j]){
					int tmp=a[k];
					a[k]=a[j];
					a[j]=tmp;
				}	
			}
		}
		for(int j=0;j<=i;j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}

