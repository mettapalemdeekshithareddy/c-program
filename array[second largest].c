#include <stdio.h>

int main() {
    int n, i;
    int max, secondMax;
    int arr[50];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = secondMax = -1;

    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    printf("%d", secondMax);
    return 0;
}
