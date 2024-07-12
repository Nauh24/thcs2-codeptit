#include <stdio.h>
#include <stdbool.h>



void bubbleSort(int a[], int n){
	int t = 1;
	int ok;
	for(int i = 0; i < n-1; i++){
		ok = false;
		for(int j = 0; j < n-1-i; j++){
			if(a[j] > a[j+1]){
				int tmp=a[j+1];
				a[j+1]=a[i];
				a[i]=tmp;
				ok = true;
			}
		}
		if(ok == false)
		break;
		printf("Buoc %d: ", t);
		++t;
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	bubbleSort(a,n);
}
