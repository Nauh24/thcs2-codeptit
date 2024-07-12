#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX_LEN 101

bool is_word_present(char word_list[][MAX_LEN], int word_count, char* word) {
    for (int i = 0; i < word_count; i++) {
        if (strcmp(word_list[i], word) == 0) {
            return true;
        }
    }
    return false;
}
void solve(char* s) {
    char word_list[MAX_LEN][MAX_LEN] = {0};
    int word_count = 0;
    
    char* token = strtok(s, " ");
    while (token != NULL) {
        if (!is_word_present(word_list, word_count, token)) {
            strcpy(word_list[word_count], token);
            word_count++;
        }
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < word_count; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%s", word_list[i]);
    }
    printf("\n");
}
int main() {
	char s[100];
	gets(s);
	solve(s);
}

