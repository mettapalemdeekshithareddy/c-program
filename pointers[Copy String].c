#include <stdio.h>
#define MAX_LENGTH 100

int main() {
    char source[MAX_LENGTH], destination[MAX_LENGTH];
    char *src_ptr, *dest_ptr;

   
    dest_ptr = destination;

    printf("Enter a string: ");
   
    scanf("%[^\n]s", source);

    
    while (*src_ptr != '\0') {
        *dest_ptr = *src_ptr;
        src_ptr++;
        dest_ptr++;
    }
    *dest_ptr = '\0'; 

    printf("Copied string: %s\n", destination);

    return 0;
}