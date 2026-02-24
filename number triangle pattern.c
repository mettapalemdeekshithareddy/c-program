#include <stdio.h>
int main() {
    int i, j, n;
    int  num = 1;
    printf("Enter the number = ");
    scanf("%d",& n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}