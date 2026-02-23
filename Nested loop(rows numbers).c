#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <= rows - 1; i++) {
`       `
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        

        printf(" "); 

      
        for (int k = i; k >= 1; k--) {
            printf("%d", k);
        }
        
        printf("\n");
    }

   
    for (int i = 1; i <= 4; i++) {
        printf("%d", i);
    }
    for (int i = 4; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");

    return 0;
}