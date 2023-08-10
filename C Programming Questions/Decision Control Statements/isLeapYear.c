// C Program to Check Whether A Given Year is Leap Year or Not

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int year;
    printf("\nEnter A Year to Check Whether It is A Leap Year or Not => ");
    scanf("%d", &year);


    // 1st Approach
    if (year % 400 == 0)
        printf("\n%d is A Leap Year", year);
    else if (year % 100 == 0)
        printf("\n%d is Not A Leap Year", year);
    else if (year % 4)
        printf("\n%d is Not A Leap Year", year);
    else
        printf("\n%d is A Leap Year", year);


    // 2nd Approach
    // if (year % 400 == 0 || (year % 100 && year % 4 == 0))
    //     printf("\n%d is A Leap Year", year);
    // else
    //     printf("\n%d is Not A Leap Year", year);


    getch();
    return 0;
}
// Main Function End
