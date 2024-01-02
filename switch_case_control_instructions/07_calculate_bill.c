// Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition. using the switch Statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.


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
