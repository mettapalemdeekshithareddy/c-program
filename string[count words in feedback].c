#include <stdio.h>

int main()
{
    char str[200];
    int i, word = 1;

    printf("enter feedback = ");
    fgets(str, 50, stdin);

    if (str[0] == '\0')
    {
        printf(" 0\n");
        return 0;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
            word++;
    }

    printf("%d\n", word);
    return 0;
}