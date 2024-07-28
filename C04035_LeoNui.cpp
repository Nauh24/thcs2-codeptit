#include<stdio.h>
int max(int x, int y){
	return x>y ? x:y;
}
int min(int x, int y){
	return x<y ? x:y;
}
int main() {
	int n;
	scanf("%d", &n);
	int sumx=0, sumy=0, minx=50000, miny=50000;
	while(n--){
		int x,y;
		scanf("%d %d", &x, &y);
		sumx+=x;
		sumy+=y;
		minx=min(minx,x);
		miny=min(miny,y);
	}
	sumx+=miny;
	sumy+=minx;
	printf("%d", max(sumx,sumy));
}
