#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    scanf("%s", str);

    while(str[i] != '\0') {
        length++;
        i++;
    }

    printf("%d", length);
    return 0;
}
