#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}
void intersection(int a[], int b[], int n, int m){
	int c[101];
	int i=0,j=0,k=0;
	while(i<n && j<m){
		if(a[i]==b[j]){
			c[k++]=a[i];
			i++;
			j++;
		}
		else if(a[i]<b[j]) i++;
		else j++;
	}
	for(int i=0;i<k;i++){
		
		printf("%d ",c[i]);
	} 
	printf("\n");
}
void remove_dup(int a[], int n){
	
}
void different(int a[], int b[], int n, int m){
	int c[101];
	int i=0, j=0, k=0;
	while(i<n){
		if(j<m && a[i]==b[j]){
			i++;
			j++;
		}
		else if(j<m && a[i]>b[j]) j++;
		else {
			c[k++]=a[i];
			i++;
		}
	}
	for(int i=0;i<k;i++) printf("%d ",c[i]);
	printf("\n");
}
int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	int aa[n], bb[m];
	int d1[1001]={0};
	int d2[1001]={0};
	int a[n],b[m];
	int idx1=0, idx2=0;
	for(int i=0;i<n;i++) {
		scanf("%d",&aa[i]);
		if(d1[aa[i]]==0) a[idx1++]=aa[i];
		d1[aa[i]]=1; 
	}
	for(int i=0;i<m;i++) {
		scanf("%d",&bb[i]);
		if(d2[bb[i]]==0) b[idx2++]=bb[i];
		d2[bb[i]]=1;
	}
	qsort(a,idx1,sizeof(int),compare);
	qsort(b,idx2,sizeof(int),compare);
	intersection(a,b,idx1,idx2);
	different(a,b,idx1,idx2);
	different(b,a,idx2,idx1);
}

