#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	int coef;
	int exp;
} Term;
int heSo(char s[]){
	int sum=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='*') break;
		sum= sum*10+(s[i]-'0');
	}
	return sum;
}
int bac(char s[]){
	int sum=0;
	int j=1;
	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i]=='^') break;
		sum = (s[i]-'0')*j + sum;
		j*=10;
	}
	return sum;
}
int cmp(const void *a, const void *b){
	Term *x = (Term *)a;
	Term *y = (Term *)b;
	return y->exp - x->exp;
}
int main() {
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s1[10000];
		char s2[10000];
		gets(s1);
		gets(s2);
		Term a[10000];
		int n=0;
		char *token1 = strtok(s1," ");
		while(token1!=NULL){
			if(strcmp(token1,"+")!=0){
				//printf("%s ",token1);
				int len=strlen(token1);
				a[n].coef = heSo(token1);
				a[n].exp = bac(token1);
				n++;	
			}
			token1 = strtok(NULL," ");
		}
		
		char *token2 = strtok(s2," ");
		while(token2!=NULL){
			if(strcmp(token2,"+")!=0){
				int len=strlen(token2);
				int coef=heSo(token2);
				int exp=bac(token2);
				int found=0;
				for(int i=0;i<n;i++){
					if(exp==a[i].exp){
						found=1;
						a[i].coef += coef;
						break;
					}	
				}
				if(!found) {
					a[n].coef = coef;
					a[n].exp = exp;
					n++;
				}
			}
			token2 = strtok(NULL," ");
		}
		
		qsort(a,n,sizeof(Term),cmp);
		for(int i=0;i<n;i++) {
			printf("%d*x^%d", a[i].coef, a[i].exp);
			if(i!=n-1) printf(" + ");
		}
		printf("\n");
	}
}
/*
1
3*x^8 + 7*x^2 + 4*x^0
11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
*/

