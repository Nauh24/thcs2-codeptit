#include<stdio.h>
typedef long long ll;
int main() {
	int n;
	scanf("%d",&n);
	int x,y;
	ll min_x=1e9;
	ll min_y=1e9;
	while(n--){
		scanf("%d %d",&x,&y);
		if(x<min_x) min_x=x;
		if(y<min_y) min_y=y;
	}
	printf("%lld",min_x*min_y);
}

