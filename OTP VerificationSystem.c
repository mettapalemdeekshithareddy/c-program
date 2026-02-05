#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char otp[20];
    int i, valid = 1;

    printf("Enter OTP: ");
    scanf("%s", otp);


    if (strlen(otp) != 6) {
        valid = 0;
    }

    for (i = 0; otp[i] != '\0'; i++) {
        if (!isdigit(otp[i])) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid OTP\n");
    else
        printf("Invalid OTP\n");

    return 0;
}
