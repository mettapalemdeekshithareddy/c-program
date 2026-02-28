#include <stdio.h>

int main() {
    int i, j, rows = 9;
    int spaces = 7; 

 
    for (i = 1; i <= (rows / 2) + 1; i++) {
       
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }

        
        if (i < (rows / 2) + 1) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
        }

        printf("\n");
        spaces -= 2; 
    }
    return 0;
}