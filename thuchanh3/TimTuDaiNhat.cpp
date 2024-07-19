#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct Word {
	char content[1001];
	int frequency;
};

typedef struct Word Word;

Word words[1001];
int wordCount = 0;

int findWordIndex(Word arr[], int size, char str[]) {
	for (int i = 0; i < size; i++) {
		if (strcmp(arr[i].content, str) == 0) return i;
	}
	return -1;
}

int main() {
	char input[1001];
	while (scanf("%s", input) != EOF) {
		int index = findWordIndex(words, wordCount, input);
		if (index != -1) {
			++words[index].frequency;
		} else {
			strcpy(words[wordCount].content, input);
			words[wordCount].frequency = 1;
			++wordCount;
		}
	}

	int maxLength = 0;
	for (int i = 0; i < wordCount; i++) {
		if (strlen(words[i].content) > maxLength) maxLength = strlen(words[i].content);
	}

	for (int i = 0; i < wordCount; i++) {
		if (strlen(words[i].content) == maxLength) {
			printf("%s %d %d\n", words[i].content, maxLength, words[i].frequency);
		}
	}
}

