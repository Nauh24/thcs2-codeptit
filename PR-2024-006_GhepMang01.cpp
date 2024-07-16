#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int m,n;
		char x;
		scanf("%d %d %c",&m,&n,&x);
		int a[m];
		int b[n];
		int idx=0;
		int c[100];
		for(int i=0;i<m;i++){
			scanf("%d",&a[i]);
			c[idx++]=a[i];
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
			c[idx++]=b[i];
		}
		if(x=='T'){
			for(int i=0;i<m+n;i++){
				for(int j=i+1;j<m+n;j++){
					if(c[j]<c[i]){
						int tmp=c[j];
						c[j]=c[i];
						c[i]=tmp;
					}
				}
			}
			for(int i=0;i<idx;i++) printf("%d ",c[i]);
		}
		else if(x=='G'){
			for(int i=0;i<m+n;i++){
				for(int j=i+1;j<m+n;j++){
					if(c[j]>c[i]){
						int tmp=c[j];
						c[j]=c[i];
						c[i]=tmp;
					}
				}
			}
			for(int i=0;i<idx;i++) printf("%d ",c[i]);
		}
		else if(x=='F'){
			for(int i=0;i<m;i++) printf("%d ",a[i]);
			for(int i=0;i<n;i++) printf("%d ",b[i]);
		}
		else {
			for(int i=0;i<n;i++) printf("%d ",b[i]);
			for(int i=0;i<m;i++) printf("%d ",a[i]);
		}
		printf("\n");
	}
}

