#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of sales (N): ");
    scanf("%d", &N);

    int sales; 
    printf("Enter the sales figures: ");
    for (int i = 0; i < N; i++)
     {
        scanf("%d", &sales[i]);
    }

    int sorted = 1; 
    for (int i = 0; i < N - 1; i++)
     {
        if (sales[i] > sales[i+1]) {
            sorted = 0; 
            break; 
        }
    }

    if (sorted) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}