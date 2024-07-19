#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef long long ll;
void toMin(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='6') s[i]='5';
	}
}

void toMax(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='5') s[i]='6';
	}
}

ll strToll(char c[]){
	ll r=0;
	for(int i=0;i<strlen(c);i++){
		r=r*10+(c[i]-'0');
	}
	return r;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		char x1[20], x2[20];
		scanf("%s %s",&x1,&x2);
		char tmp1[20], tmp2[20];
		strcpy(tmp1,x1);
		strcpy(tmp2,x2);
		toMin(tmp1);
		toMin(tmp2);
		ll min1=atoll(tmp1);
		ll min2=atoll(tmp2);
		toMax(x1);
		toMax(x2);
		ll max1=atoll(x1);
		ll max2=atoll(x2);
		printf("%lld %lld",min1+min2,max1+max2);
		printf("\n");
	}
}

