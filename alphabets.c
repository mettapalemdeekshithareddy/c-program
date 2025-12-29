#include <stdio.h>
int main() {
    char ch;
    printf("enter ch=");
    scanf("%c",&ch);
    if((ch>='A'&& ch<='Z') || (ch>='a'&& ch<='z')){
        printf("alphabet");
    }
    else{
        printf("not a alphabet");
    }
    
    
    return 0;
}