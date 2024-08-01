#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	int id;
	char name[100];
	float d1,d2,d3;
	float sum;
} Student;
int check(Student a){
	if(a.d1 <= a.d2 && a.d2<=a.d3) return 1;
	else return 0;
}
void xuat(Student a){
	printf("%d %s %.1f %.1f %.1f\n", a.id, a.name, a.d1, a.d2, a.d3);
}
int main() {
	int x;
	Student a[100];
	int n=0;
	int id=1;
	while(1){
		scanf("%d", &x);	
		if(x==3){
			for(int i=0;i<n;i++) {
				if(check(a[i])) xuat(a[i]);
			}
			break;
		}
		if(x==1){
			int m;
			scanf("%d\n", &m);
			char tmp[100];
			for(int i=0;i<m;i++){
				gets(tmp);
				//getchar();
				float d1,d2,d3;
				scanf("%f %f %f",&d1, &d2, &d3);
				strcpy(a[n].name,tmp);
				a[n].id=id++;
				a[n].d1 = d1;
				a[n].d2 =d2;
				a[n].d3 = d3;
				a[n].sum = d1+d2+d3;
				n++;
				getchar();
			}
			printf("%d\n", m); 
		}
		if(x==2){
			int k;
			scanf("%d\n",&k);
			char tmp[100];
			gets(tmp);
			float d1,d2,d3;
			scanf("%f %f %f",&d1, &d2, &d3);
			for(int i=0;i<n;i++){
				if(a[i].id==k){
					strcpy(a[i].name,tmp);
					a[i].d1 = d1;
					a[i].d2 = d2;
					a[i].d3 = d3;
					a[i].sum = d1+d2+d3;
					break;
				}
			}
			printf("%d\n",k);
		}
	}
}
/*
1
2
nguyen van hai
8.5 5.5 7.5
tran van tuan
8.5 6.5 9.0
2
2
tran van nam
5.5 6.0 7.0
3
*/
