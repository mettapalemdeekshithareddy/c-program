#include <stdio.h>

int main() {
    int N, i;
    long long expected_sum = 0;
    long long actual_sum = 0;
    int current_roll;

    
    printf("Enter the value of N: ");
    if (scanf("%d", &N) != 1 || N < 1) {
        printf("Invalid input for N.\n");
        return 1;
    }

    
    expected_sum = (long long)N * (N + 1) / 2;

   
    printf("Enter the %d roll numbers (1 to N, one missing):\n", N - 1);
    for (i = 0; i < N - 1; i++) {
        if (scanf("%d", &current_roll) != 1) {
            printf("Invalid input for roll number.\n");
            return 1;
        }
        actual_sum += current_roll;
    }

    
    int missing_roll = expected_sum - actual_sum;

   
    printf("The missing roll number is: %d\n", missing_roll);

    return 0;
}