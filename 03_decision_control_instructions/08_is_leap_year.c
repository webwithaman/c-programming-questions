// //  C program to check whether a given year is a leap year or not

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int year;
    printf("\nEnter An Year to Check Whether It is Leap Year or Not => ");
    scanf("%d", &year);

    // // using if-else-if ladder
    if (year % 400 == 0)
        printf("\n%d is a Leap Year", year);
    else if (year % 100 == 0)
        printf("\n%d is not a Leap Year", year);
    else if (year % 4 == 0)
        printf("\n%d is a Leap Year", year);
    else
        printf("\n%d is not a Leap Year", year);

    // // using nested if-else
    // // if (year % 4 == 0)
    // // {
    // //     if (year % 100 != 0)
    // //         printf("\n%d is a Leap Year", year);
    // //     else if (year % 400 == 0)
    // //         printf("\n%d is a Leap Year", year);
    // //     else
    // //         printf("\n%d is not a Leap Year", year);
    // // }
    // // else
    // // {
    // //     printf("\n%d is not a Leap Year", year);
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
