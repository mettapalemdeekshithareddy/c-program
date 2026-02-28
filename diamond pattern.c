#include <stdio.h>

int main() {
    int rows = 10;
    int max_width = 13;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= max_width; j++) {
            
            if (i <= 5) {
                if (j <= (6 - i) || j >= (8 + i)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
           
            else {
                if (j <= (i - 5) || j >= (19 - i)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}