#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    ptr = str;

    while (*ptr != '\0') {
        char lower_char = tolower(*ptr);
        if (lower_char == 'a' || lower_char == 'e' || lower_char == 'i' || lower_char == 'o' || lower_char == 'u') {
            count++;
        }
        ptr++;
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}