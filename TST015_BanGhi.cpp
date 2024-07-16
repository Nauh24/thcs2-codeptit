#include<stdio.h>

typedef struct{
	float a,b,c,s;
} tamgiac tg;



void nhap(tamgiac tg){
	scanf("%f %f %f",&tg.a, &tg.b, &tg.c);
}

double dienTich(tamgiac tg){
	double p= (tg.a+tg.b+tg.c)/2.0;
	double s= sqrt(p*(p-tg.a)*(p-tg.b)*(p-tg.c));
	return s;
}

void in(tamgiac tg){
	printf("%f %f %f",tg.a,tg.b,tg.c);
}

void sort(int n,tamgiac a){

}
void ghi(const char *filename, tamgiac *tg, int n){
	FILE *file=fopen(filename,"wb");
	if(file== NULL){
		exit(1);
	}
	fwrite(tg,sizeof(tamgiac),n,file);
	fclose(file);
}
int main() {
	int n;
	scanf("%d",&n);
	tamgiac TG[100];
	for(int i=0;i<n;i++){
		nhap(TG[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(TG[j].s>TG[i].s){
				tg tmp=TG[j];
				TG[j]=TG[i];
				TG[i]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++) {
		in(TG[i]);
	}
	
}

