#include <stdio.h>
int main() {
    int n;
    printf("enter n=");
    scanf("%d",& n);
    if(n >=0 && n<=9){
        printf("Single digit");
    }
    else{
        printf("Not a Single digit");
    }
    
    return 0;
}