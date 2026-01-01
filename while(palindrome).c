#include <stdio.h>
int main() {
  int n,temp,rev,digit;
  rev=0;
  printf("enter n=");
  scanf("%d",&n);
  temp=n;
  while(n>0){
      digit=n % 10;
      rev=rev*10+digit;
      n=n/10;
  }
  if(rev==temp){
    printf("palindrome");
  }
  else{
    printf("not palindrome");
  }
    
    return 0;
}