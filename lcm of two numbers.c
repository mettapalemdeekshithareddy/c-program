#include <stdio.h>
int main() {
    int a, b, lcm;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d %d", &b);
    lcm = (a > b) ? a : b;
    while (1) {
    if (lcm % a == 0 && lcm % b == 0) {
         printf("LCM = %d", lcm);
         break;
         }
        lcm++;
    }
    return 0;
}
