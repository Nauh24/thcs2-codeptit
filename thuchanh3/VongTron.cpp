#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char input[100], filtered[100];
	int count = 0;
	int len = 0;

	gets(input);

	for(int i = 0; i < strlen(input); i++){
		if(i == 0){
			if(input[i] != input[i+1]){
				filtered[len++] = input[i];
			}
		}
		else if(i == strlen(input)-1){
			if(input[i-1] != input[i]){
				filtered[len++] = input[i];
			}
		}
		else{
			if(input[i] != input[i-1] && input[i] != input[i+1]){
				filtered[len++] = input[i];
			}
		}
	}

	int distinctCount = 0;
	int mark1[100] = {0};
	int mark2[100] = {0};

	for(int i = 0; i < len; i++){
		mark1[filtered[i]] = 1;
		for(int j = i+1; j < len; j++){
			if(filtered[i] == filtered[j]){
				mark1[filtered[j]] = 1;
				for(int k = i+1; k < j; k++){
					++mark2[filtered[k]];
				}
				for(int k = i+1; k < j; k++){
					if(mark1[filtered[k]] == 0 && mark2[filtered[k]] == 1){
						++distinctCount;
					}
				}
				for(int k = i+1; k < j; k++){
					mark2[filtered[k]] = 0;
				}
			}
		}
	}

	printf("%d", distinctCount);
}


