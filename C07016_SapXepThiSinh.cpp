#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	int id;
	char name[100], bd[100];
	float d1,d2,d3;
	float sum;
} Student;
void input(Student *a,int id){
	a->id =id;
	getchar();
	gets(a->name);
	gets(a->bd);
	scanf("%f %f %f",&a->d1, &a->d2, &a->d3);
	a->sum = a->d1 + a->d2 + a->d3;
}
void output(Student a){
	printf("%d %s %s %.1f\n", a.id, a.name, a.bd, a.sum);
}
int cmp(const void *a, const void *b){
	Student *x = (Student *)a;
	Student *y = (Student *)b;
	if(y->sum > x->sum) return 1;
	if(y->sum < x->sum) return -1;
	return 0;
}

int main() {
	int n;
	scanf("%d",&n);
	Student a[n];
	for(int i=0;i<n;i++){
		input(&a[i],i+1);
	}	
	qsort(a,n,sizeof(Student),cmp);
	for(int i=0;i<n;i++){
		output(a[i]);
	}
}
/*
3
Nguyen Van A
12/12/1994
3.5
7.0
5.5
Nguyen Van B
1/9/1994
7.5
9.5
9.5
Nguyen Van C
6/7/1994
4.5
4.5
5.0
*/
