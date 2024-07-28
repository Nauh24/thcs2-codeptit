#include<stdio.h>
int max(int a, int b){
	return a>b ? a : b;
}
int min(int a, int b){
	return a<b ? a : b;
}
int main() {
	int x1,y1,x2,y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	int x3,y3,x4,y4;
	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
	int x_min=min(x1,x3);
	int y_min=min(y1,y3);
	int x_max=max(x2,x4);
	int y_max=max(y2,y4);
	int side=max(x_max-x_min, y_max-y_min);
	int area=side*side;
	printf("%d",area);
}

