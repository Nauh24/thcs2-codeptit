#include <stdio.h>

int main() {
    int a,k,n;
    scanf("%d %d %d", &a, &k, &n);
    int start = (a/k)+1;
    int end = n/k;
    int ok=0;
    for(int i=start;i<=end;i++){
    	int b = i*k-a;
    	if(b>0) {
    		printf("%d ",b);
    		ok=1;
		}
	}
	if(!ok) printf("-1");
    
}

/*
10 1 10
10 6 40
*/
