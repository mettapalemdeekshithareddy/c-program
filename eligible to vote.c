// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int age;
    printf("enter age=");
    scanf("%d",& age);
    if(age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not Eligible to vote");
    }

    return 0;
}