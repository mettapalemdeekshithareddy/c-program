#include <stdio.h>
#include<string.h>
int main() {
    char s[50];
    int i;
    int flag=0;
    fgets(s,sizeof(s),stdin);
    for( i=0;s[i]!='\0';i++){
       
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                flag=1;
                break;
            }
        }
    }
            if(flag==0){
                printf("%c",s[i]);
            }
            else{
                printf("no unique");
            }
            return 0;
        }