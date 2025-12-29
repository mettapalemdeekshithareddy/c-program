// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("enter a=");
    scanf("%d",& a);
    
    if(a%5==0){
        printf("divisible");
    }
    else{
        printf("not divisible");
    }

    return 0;
}