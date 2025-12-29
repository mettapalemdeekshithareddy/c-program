#include <stdio.h>
int main() {
    int marks;
    printf("enter marks=");
    scanf("%d", & marks);
    if(marks >=90 && marks <=100){
        printf("A");
    }
    else if(marks >=75 && marks <90){
    printf("B");
    }
   else if(marks >=60 && marks <75){
    printf("C");
    }
   else if(marks >=40 && marks <60){
    printf("D");
    }
    else if(marks <40){
    printf("fail");
    }
    else{
        printf("not valid");
    }


    
    
    return 0;
}