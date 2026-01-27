#include <stdio.h>

char calculateGrade(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 75)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 40)
        return 'D';
    else
        return 'F';
}

int main()
{
    int marks;
    char grade;

    printf("Enter marks: ");
    scanf("%d", &marks);

    grade = calculateGrade(marks);

    printf("Grade: %c", grade);

    return 0;
}
