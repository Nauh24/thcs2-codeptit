#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct Word {
	char content[1001];
	int frequency;
};

typedef struct Word WordEntry;

WordEntry words[1001];
int wordCount = 0;

int isPalindrome(char str[]) {
	int left = 0;
	int right = strlen(str) - 1;
	while (left <= right) {
		if (str[left] != str[right]) return 0;
		++left;
		--right;
	}
	return 1;
}

int findIndex(WordEntry arr[], int size, char str[]) {
	for (int i = 0; i < size; i++) {
		if (strcmp(arr[i].content, str) == 0) return i;
	}
	return -1;
}

int main() {
	char input[1001];
	while (scanf("%s", input) != -1) {
		if (isPalindrome(input)) {
			int index = findIndex(words, wordCount, input);
			if (index != -1) {
				++words[index].frequency;
			} else {
				strcpy(words[wordCount].content, input);
				words[wordCount].frequency = 1;
				++wordCount;
			}
		}
	}

	int maxLength = 0;
	for (int i = 0; i < wordCount; i++) {
		if (strlen(words[i].content) >= maxLength) maxLength = strlen(words[i].content);
	}
	for (int i = 0; i < wordCount; i++) {
		if (strlen(words[i].content) == maxLength) {
			printf("%s %d\n", words[i].content, words[i].frequency);
		}
	}
}

