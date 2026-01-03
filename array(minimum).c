#include <stdio.h>

int main() {
    int a[5]={2,9,1,6,4};
    int min=a[0];
    for( int i = 0; i < 5; i++){
        if(a[i]<min)
            min=a[i];
        }
        printf("%d",min);
    
    

    return 0;
}