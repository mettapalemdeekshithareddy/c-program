#include <stdio.h>
int main() {
   int a,b,small;
   printf("enter a = ");
   scanf("%d",& a);
   printf("enter b = ");
   scanf("%d",& b);
   small= (a > b) ? a : b;
   printf("%d",small) ;
    return 0;
}