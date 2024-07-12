#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    char startChar = 'A';

    for (int i = 0; i < rows; i++) {
        char currentChar = startChar + (rows - 1 - i); 

        for (int j = 0; j < cols; j++) {
        
            if (currentChar < startChar + cols-1) {
            printf("%c", currentChar);	
                currentChar++;
            }
            else printf("%c", startChar+cols-1);
        }

        printf("\n");
    }

    return 0;
}

