#include<stdio.h>
#include<math.h>
typedef struct{
	float x,y;
	
} Point;
void nhap(Point *a){
	scanf("%f %f", &a->x, &a->y);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		Point a,b,c;
		nhap(&a);
		nhap(&b);
		nhap(&c);
		float AB = sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
		float AC = sqrt(pow(a.x-c.x,2) + pow(a.y-c.y,2));
		float BC = sqrt(pow(b.x-c.x,2) + pow(b.y-c.y,2));
		if((AB+AC<=BC) || (AB+BC<=AC) || (AC+BC<=AB)) printf("INVALID");
		else printf("%.3f", AB+AC+BC);  	
		printf("\n");
	}
}

