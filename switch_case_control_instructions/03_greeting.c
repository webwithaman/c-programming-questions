// WAP which takes the day number of a week and displays a unique greeting message for the day.

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int dayNumber;
    printf("\nEnter Any Day Number of the Week => ");
    scanf("%d", &dayNumber);

    switch (dayNumber)
    {
    case 2:
        printf("Monday, Work Mode On...");
        break;
    case 3:
        printf("Tuesday, Work Going On...");
        break;
    case 4:
        printf("Wednesday!! Work Still Going On...");
        break;
    case 5:
        printf("Thursday!! Felling Tired Due to Work...");
        break;
    case 6:
        printf("Friday!!  Litte Hope For Sunday....");
        break;
    case 7:
        printf("Saturday!! Excited For Sunday...");
        break;
    case 1:
        printf("Sunday!! Fun Day.. Chill Mode On...");
        break;
    default:
        printf("!!! Invalid Input... Day Does Not Exist");
    }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
