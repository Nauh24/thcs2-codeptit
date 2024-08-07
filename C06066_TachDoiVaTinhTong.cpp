#include<stdio.h>
#include<string.h>

void reverse(char s[]){
	int l=0, r=strlen(s)-1;
	while(l<r){
		char tmp = s[l];
		s[l]=  s[r];
		s[r] = tmp;
		l++;
		r--;
	}
}
int main() {
	char s[201];
	scanf("%s", s);
	int n=strlen(s);
	int cnt=0;
	while(n>1){
		char left[101]="", right[101]="";
		int mid = n/2;
		strncpy(left,s,mid);
		strcpy(right,s+mid);
		char res[201]="";
		int n1=strlen(left), n2=strlen(right);
		int nho=0, idx=0;
		int i = n1-1, j = n2 -1;
		while(i>=0 || j>=0 || nho){
			int sum = nho;
			if(i>=0) sum+= left[i--] - '0';
			if(j>=0) sum+= right[j--] - '0';
			res[idx++] = sum%10 + '0';
			nho = sum /10;
		}
		res[idx]='\0';
		reverse(res);
		printf("%s\n", res);
		strcpy(s,res);
		n= strlen(s);
//		printf("%s %s %s\n",left, right,s );
//		cnt++;
//		if(cnt==6) break;
	}
}
