#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int size=2*n-1;
	int a[size][size];
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			int min= i<j ? i:j;
			min=min<size-i ? min: size-i-1;
			min=min<size-j ? min : size-j-1;
			a[i][j]=n-min;
		}
	}	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

