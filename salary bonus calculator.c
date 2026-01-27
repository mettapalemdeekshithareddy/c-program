#include <stdio.h>

int calculateBonus(int years)
{
    if (years >= 10)
        return 10000;
    else if (years >= 5)
        return 5000;
    else if (years >= 2)
        return 2000;
    else
        return 0;
}

int main()
{
    int years, bonus;

    printf("Enter years of experience: ");
    scanf("%d", &years);

    bonus = calculateBonus(years);

    printf("Bonus Amount: Rs. %d", bonus);

    return 0;
}
