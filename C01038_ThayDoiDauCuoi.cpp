#include<stdio.h>
#include<string.h>
int main() {
	char n[11];
	scanf("%s", &n);
	int len = strlen(n);
	
	char tmp = n[0];
	n[0] = n[len-1];
	n[len-1] = tmp;
	
	int k=0;
	for(int i=0;i<len;i++) {
		if(n[i] != '0') {
			k = i;
			break;
		}
	}
	for(int i=k;i<len;i++) printf("%c", n[i]);
}

