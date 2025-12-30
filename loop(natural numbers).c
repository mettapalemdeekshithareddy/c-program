#include <stdio.h>

int main() {
    int N;
    int sum;

    printf("Enter a natural number: ");
    scanf("%d", &N);

    sum = N * (N + 1) / 2;

    printf(" %d\n", N, sum);

    return 0;
}
