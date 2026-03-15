#include <stdio.h>

void findLeaders(int arr[], int n) {
   
    int maxFromRight = arr[n - 1];
    

    int leaders;
    int count = 0;
    leaders[count++] = maxFromRight;


    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

   
    printf("Leader values: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}

int main() {
    
    int arr1[] = {16, 17, 4, 3, 5, 2};
    int n1 = 6;
    printf("Test Case 1:\nInput: 16 17 4 3 5 2\n");
    findLeaders(arr1, n1);

   
    int arr2[] = {7, 6, 5, 4};
    int n2 = 4;
    printf("\nTest Case 2:\nInput: 7 6 5 4\n");
    findLeaders(arr2, n2);

    return 0;
}
