#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LEN 1001
#define MAX_WORDS 500

void to_lower(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        s[i] = tolower(s[i]);
    }
}

int cmp(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

void in(char s[][MAX_LEN], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", s[i]);
        
    }
    printf("\n");
}

int erase(char s[][MAX_LEN], int n) {
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || strcmp(s[i], s[i - 1]) != 0) {
            strcpy(s[idx++], s[i]);
        }
    }
    return idx;
}

int main() {
    char s1[MAX_LEN], s2[MAX_LEN];

    gets(s1);
    gets(s2);

    char set1[MAX_WORDS][MAX_LEN], set2[MAX_WORDS][MAX_LEN];
    int n1 = 0, n2 = 0;

    to_lower(s1);
    to_lower(s2);

    char *token1 = strtok(s1, " ");
    while (token1 != NULL) {
        strcpy(set1[n1++], token1);
        token1 = strtok(NULL, " ");
    }

    char *token2 = strtok(s2, " ");
    while (token2 != NULL) {
        strcpy(set2[n2++], token2);
        token2 = strtok(NULL, " ");
    }

    qsort(set1, n1, sizeof(set1[0]), cmp);
    qsort(set2, n2, sizeof(set2[0]), cmp);

    int idx1 = erase(set1, n1);
    int idx2 = erase(set2, n2);

    char hop[MAX_WORDS * 2][MAX_LEN], giao[50][MAX_LEN];
    int i = 0, j = 0;
    int cnt1 = 0, cnt2 = 0;

    while (i < idx1 && j < idx2) {
        int x = strcmp(set1[i], set2[j]);
        if (x < 0) {
            strcpy(hop[cnt1++], set1[i++]);
        } else if (x > 0) {
            strcpy(hop[cnt1++], set2[j++]);
        } else {
            strcpy(hop[cnt1++], set1[i]);
            strcpy(giao[cnt2++], set1[i]);
            i++;
            j++;
        }
    }

    while (i < idx1) {
        strcpy(hop[cnt1++], set1[i++]);
    }
    while (j < idx2) {
        strcpy(hop[cnt1++], set2[j++]);
    }

    in(hop, cnt1);
    in(giao, cnt2);

    return 0;
}

