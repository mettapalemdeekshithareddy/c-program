#include <stdio.h>

int main() {
    int n;
    int x = 0, y = 1;
    printf("Enter the number = ");
    scanf("%d", &n);   

    for(int i = 1; i <= n; i++) {
        printf("%d ", x);
        int z;
        z  = x + y;
        x = y;
        y = z;
    }

    return 0;
}