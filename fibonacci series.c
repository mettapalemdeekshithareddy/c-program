#include <stdio.h>

int main() {
    int n;
    printf("enter n= ");
    scanf("%d",&n);
    int a=0;
    if(n==1){
        printf("%d",a);
    }
        int b=1;
        if(n>=2){
    printf("%d",b);
        }
        for(int i=3;i <= n; i++){
            int temp;
            temp=b;
            b=a+b;
            a=temp;
            printf("%d",b);
        }

    return 0;
}