#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void sort(char arr[][1000], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = i + 1; j < size; j++){
			if(strcmp(arr[i], arr[j]) > 0){
				char temp[1000];
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}
}

int main(){
	char str1[1000], str2[1000];
	gets(str1);
	gets(str2);
	char words1[1000][1000], words2[1000][1000];
	int wordCount1 = 0, wordCount2 = 0;
	char* token = strtok(str1, " ");
	while(token != NULL){
		strcpy(words1[wordCount1], token);
		++wordCount1;
		token = strtok(NULL, " ");
	}
	char* token1 = strtok(str2, " ");
	while(token1 != NULL){
		strcpy(words2[wordCount2], token1);
		++wordCount2;
		token1 = strtok(NULL, " ");
	}
	sort(words1, wordCount1);	
	int duplicateMark[1000] = {0};
	for(int i = 0; i < wordCount1; i++){
		duplicateMark[i] = 0;
	}
	for(int i = 0; i < wordCount1; i++){
		for(int j = i + 1; j < wordCount1; j++){
			if(strcmp(words1[i], words1[j]) == 0) duplicateMark[j] = 1;
		}
	}
	for(int i = 0; i < wordCount1; i++){
		int notInSecondStr = 0;
		for(int j = 0; j < wordCount2; j++){
			if(duplicateMark[i] == 0 && strcmp(words1[i], words2[j]) != 0){
				++notInSecondStr;
			}
		}
		if(notInSecondStr == wordCount2) printf("%s ", words1[i]);
	}
}

