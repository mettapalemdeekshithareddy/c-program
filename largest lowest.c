#include <stdio.h>
int main() {
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    if(a>=b){
    printf("largest number");
    }
    else if(a<=b){
        printf("lowest number");
    }
    else{
        printf("both are equal");
    }

    
    return 0;
}