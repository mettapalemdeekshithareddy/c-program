// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch;
    printf("enter ch=");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') ||(ch>='A'&& ch<='Z'))
    if( ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||  ch=='u' ||
    ch=='A' || ch=='E' ||ch=='I' ||ch=='O'|| ch=='U' ) {
        printf("vowels");
    }
    else{
        printf("consonants");
    }

    return 0;
}