

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    char startChar = '@';
    char currentChar;

    for (int i = 0; i < rows; i++) {
        currentChar = startChar + i; 
        for (int j = 0; j < cols; j++) {
            if(currentChar< cols-1+65){
            	printf("%c", currentChar);
            	currentChar++;
			} 
            else printf("%c", cols+'A'-2);
        }
        printf("\n");
    }

    return 0;
}

