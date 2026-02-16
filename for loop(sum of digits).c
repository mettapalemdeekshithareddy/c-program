#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter the number = ");
    scanf("%d",& n);
    for(;  n != 0 ; n = n / 10){
    int rem;
    rem = n % 10;
    sum = sum + rem;

    }
    printf("%d",sum);

    return 0;
}