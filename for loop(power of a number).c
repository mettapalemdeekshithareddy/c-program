#include <stdio.h>
int main() {
    int a;
    printf("Enter the number = ");
    scanf("%d",& a);
    int b;
    printf("Enter the number = ");
    scanf("%d",& b);
    int power = 1;
    for(int i = 0 ; i <= a ; i++){
     power = power * a; 
    }
    printf("The value of %d ^ %d is %d",a,b,power);
    
    
    
    return 0;
}