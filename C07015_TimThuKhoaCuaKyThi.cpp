#include<stdio.h>
#include<string.h>
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

int main() {
	int n;
	scanf("%d",&n);
	Student a[n];
	float max=0;
	for(int i=0;i<n;i++){
		input(&a[i],i+1);
		if(a[i].sum>max) max=a[i].sum;
	}	
	for(int i=0;i<n;i++){
		if(a[i].sum==max)
		output(a[i]);
	}
}


