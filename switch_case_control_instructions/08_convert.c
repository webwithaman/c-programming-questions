// Program to convert a positive number into a negative number and negative number into a positive number using a switch statement


// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int year;
    printf("\nEnter Any Year to Check Whether It is Leap Year or Not => ");
    scanf("%d", &year);

    switch ((year % 400 == 0) || (year % 100 && year % 4 == 0))
    {
    case 0:
        printf("\n%d is Not A Leap Year", year);
        break;
    case 1:
        printf("\n%d is Leap Year", year);
        break;
    }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
