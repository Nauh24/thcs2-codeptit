#include <stdio.h>
#include <string.h>

const int vals[] = {1000, 500, 100, 50, 10, 5, 1};
const char syms[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
const int numSyms = 7;

int findIdx(char sym) {
    for (int i = 0; i < numSyms; i++) {
        if (syms[i] == sym) {
            return i;
        }
    }
    return -1;
}

int romanToInt(char roman[]) {
    int result = 0;
    int len = strlen(roman);

    for (int i = 0; i < len; i++) {
        int currVal = vals[findIdx(roman[i])];
        if (i + 1 < len) {
            int nextVal = vals[findIdx(roman[i + 1])];
            if (currVal >= nextVal) {
                result += currVal;
            } else {
                result -= currVal;
            }
        } else {
            result += currVal;
        }
    }

    return result;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {
        char rom[1000];
        gets(rom);
        int res = romanToInt(rom);
        printf("%d\n", res);
    }

    return 0;
}

