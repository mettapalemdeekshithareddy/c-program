#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char s[1000];
    int maxVowels = 0;
    int currentCount = 0;

    printf("Enter string: ");
    if (scanf("%s", s) != 1) return 1;

   
    for (int i = 0; s[i] != '\0'; i++) {
        if (isVowel(s[i])) {
            
            currentCount++;
        } else {
           
            if (currentCount > maxVowels) {
                maxVowels = currentCount;
            }
            currentCount = 0;
        }
    }

    
    if (currentCount > maxVowels) {
        maxVowels = currentCount;
    }

    printf("Output: %d\n", maxVowels);

    return 0;
}
