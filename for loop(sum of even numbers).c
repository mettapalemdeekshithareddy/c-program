#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Enter the number = ");
    scanf("%d",& n);
    for( int i = 2; i <= n ; i +=2){
    sum = sum + i;
    }
    printf("%d\n",sum);
    
    
    return 0;
}