#include<stdio.h>
int main() {
		int n;
		scanf("%d",&n);
		int a[n], b[n];
		for(int i=0;i<n;i++){
			scanf("%d %d", &a[i], &b[i]);
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]<a[i]){
					int tmp1=a[j];
					a[j]=a[i];
					a[i]=tmp1;
					int tmp2=b[j];
					b[j]=b[i];
					b[i]=tmp2;
				}
			}
		}
		int time=0;
		for(int i=0;i<n;i++){
			if(a[i]>time) time=a[i];
			time+=b[i];
		}
		printf("%d",time);
		printf("\n");
}

