// //  C program to input two dates from user then print which of the entered date is greater or print same if both are equal

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int day1, day2, month1, month2, year1, year2;
    printf("\nEnter First Date (Date-1) In This Format (DD/MM?YYYY) => ");
    scanf("%d/%d/%d", &day1, &month1, &year1);
    printf("\nEnter Second Date (Date-2) In This Format (DD/MM?YYYY) => ");
    scanf("%d/%d/%d", &day2, &month2, &year2);

    if (day1 < 0 || day2 < 0 || day1 > 31 || day2 > 31 || month1 < 0 || month2 < 0 || month1 > 12 || month2 > 12 || year1 < 0 || year2 < 0)
        printf("\n!!! Invalid Date");
    else
    {
        if (year1 > year2)
            printf("\n%d/%d/%d is Greater ", day1, month1, year1);
        else if (year2 > year1)
            printf("\n%d/%d/%d is Greater ", day2, month2, year2);
        else if (month1 > month2)
            printf("\n%d/%d/%d is Greater ", day1, month1, year1);
        else if (month2 > month1)
            printf("\n%d/%d/%d is Greater ", day2, month2, year2);
        else if (day1 > day2)
            printf("\n%d/%d/%d is Greater ", day1, month1, year1);
        else if (day2 > day1)
            printf("\n%d/%d/%d is Greater ", day2, month2, year2);
        else
            printf("\n%d/%d/%d = %d/%d/%d ", day1, month1, year1, day2, month2, year2);
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
