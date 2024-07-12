#include<stdio.h>
int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(i+j<b) printf("%c", i+j+'A');
			else printf("%c", b-j-1+'A');
		}
		printf("\n");
	}
}

