#include<stdio.h>
#include<math.h>
typedef struct{
	double x,y;
} Point;
void nhap(Point *a){
	scanf("%lf %lf", &a->x, &a->y);
}
int main() {
	 int t;
	 scanf("%d", &t);
	 while(t--){
	 	Point a,b,c;
	 	nhap(&a);
	 	nhap(&b);
	 	nhap(&c);
	 	double AB = sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
	 	double AC = sqrt(pow(a.x-c.x,2) + pow(a.y-c.y,2));
	 	double BC = sqrt(pow(c.x-b.x,2) + pow(c.y-b.y,2));
	 	if((AB+AC<=BC) || (AB+BC<=AC) || (AC+BC<=AB)) printf("INVALID");
	 	else {
	 		double p= (AB+AC+BC)/2;
	 		double area = sqrt(p*(p-AB)*(p-AC)*(p-BC));
	 		printf("%.2lf", area);
		 }
	 	printf("\n");
	 }
}

