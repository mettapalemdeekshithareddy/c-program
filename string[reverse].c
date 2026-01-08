#include <stdio.h>

int main() {
    char s[20];
    int i, len = 0;

    printf("Enter string: ");
    scanf("%s", s);

    while (s[len] != '\0') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    return 0;
}
