// //  C program which takes the month number as an input and display number of days in that month

// // Header files
#include <stdio.h>
#include <conio.h>
#include <time.h>

// // Main Function Start
int main()
{

    int monthNumber;
    printf("\nEnter A Month Number => ");
    scanf("%d", &monthNumber);

    // // Using If-else ladder
    if (monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || monthNumber == 12)
    {
        printf("\nThere Are 31 Days In Entered Month");
    }
    else if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11)
    {
        printf("\nThere Are 30 Days In Entered Month");
    }
    else if (monthNumber == 2)
    {
        time_t s;
        struct tm *current_time;
        s = time(NULL);
        current_time = localtime(&s);
        int currentYear = current_time->tm_year + 1900;
        if (currentYear % 400 == 0 || (currentYear % 100 && currentYear % 4 == 0))
            printf("\nThere Are 29 Days In Entered Month");
        else
            printf("\nThere Are 28 Days In Entered Month");
    }
    else
    {
        printf("\nNot A Valid Month Number");
    }

    // // Using Switch Case
    // // switch (monthNumber)
    // // {
    // // case 1:
    // // case 3:
    // // case 5:
    // // case 7:
    // // case 8:
    // // case 10:
    // // case 12:
    // //     printf("\nThere Are 31 Days In Entered Month");
    // //     break;

    // // case 4:
    // // case 6:
    // // case 9:
    // // case 11:
    // //     printf("\nThere Are 30 Days In Entered Month");
    // //     break;

    // // case 2:
    // // {
    // //     time_t s;
    // //     struct tm *current_time;
    // //     s = time(NULL);
    // //     current_time = localtime(&s);
    // //     int currentYear = current_time->tm_year + 1900;
    // //     if (currentYear % 400 == 0 || (currentYear % 100 && currentYear % 4 == 0))
    // //         printf("\nThere Are 29 Days In Entered Month");
    // //     else
    // //         printf("\nThere Are 28 Days In Entered Month");
    // // }

    // // default:
    // //     printf("\nNot A Valid Month Number");
    // //     break;
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
