#include<stdio.h>
#include<string.h>
typedef struct{
	char s[1000];
	int fre;
} Tu;
int main() {
	char tmp[1000];
	int max_len=0;
	Tu a[1000];
	int n=0;
	while(scanf("%s",tmp)!=-1){
		//if(strcmp(tmp,"-1")==0) break;
		int len=strlen(tmp);
		if(len>max_len) max_len=len;
		int found=0;
		for(int i=0;i<n;i++){
			if(strcmp(a[i].s, tmp)==0) {
				a[i].fre++;
				found=1;
				break;
			}
		}
		if(!found){
			strcpy(a[n].s, tmp);
			a[n].fre=1;
			n++;
		}
	}
	for(int i=0;i<n;i++){
		if(strlen(a[i].s)==max_len) {
			printf("%s %d %d\n", a[i].s, max_len, a[i].fre);
		}
	}
}
/*
Tiet hoc cuoi cung da ket thuc. Mon hoc Tin hoc co so 2 da ket thuc. Cac ban co gang on tap tot de thi dat ket qua cao. Chuc cac ban ngay cang gat hai duoc nhieu thanh cong tren con duong da chon
*/
