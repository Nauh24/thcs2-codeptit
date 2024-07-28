#include<stdio.h>
#include<string.h>
typedef struct{
	char name[100];
	int need, have, evolutions;
} Pokemon;

int main() {
	int n;
	scanf("%d",&n);
	Pokemon a[n];
	for(int i=0;i<n;i++){
		scanf("%s",a[i].name);
		scanf("%d %d", &a[i].need, &a[i].have);
		a[i].evolutions=0;
	}
	int max=0;
	int total=0;
	char res[100];
	for(int i=0;i<n;i++){
		int have=a[i].have;
		int need=a[i].need;
		int cnt=0;
		while(have>=need){
			have-=need;
			have+=2;
			cnt++;
		}
		a[i].evolutions=cnt;
		total+=cnt;
		if(cnt>max) {
			max=cnt;
			strcpy(res,a[i].name);
		}
	}
	printf("%d\n",total);
	printf("%s\n",res);
}

