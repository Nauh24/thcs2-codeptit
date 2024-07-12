#include<stdio.h>
#include<math.h>
int main() {
	int x1,x2, y1, y2;
	scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
	int z1,z2, w1, w2;
	scanf("%d %d %d %d", &z1,&z2, &w1, &w2);
	int a,b,c,d;
	if(z1<x1) a=z1;
	else a=x1;
	if(z2<x2) b=z2;
	else b=x2;
	if(y1>w1) c=y1;
	else c=w1;
	if(y2>w2) d=y2;
	else d=w2;
	
	int e=abs(c-a);
	int f=abs(d-b);
	if(e>f) printf("%d", e*e);
	else printf("%d",f*f);
}

