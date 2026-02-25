#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 4;

    for (i = 0; i < rows; i++) {
        
        for (space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }

        
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }

        
        for (j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}