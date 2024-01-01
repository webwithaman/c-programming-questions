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
    case 1:
        printf("\n🤩 Sunday Means Funday 🤩");
        break;
    case 2:
        printf("\n🤩 Sunday Means Funday 🤩");
        break;
    case 3:
        printf("\n🤩 Sunday Means Funday 🤩");
        break;
    case 4:
        printf("\n🤩 Sunday Means Funday 🤩");
        break;
    case 5:
        printf("\n🤩 Sunday Means Funday 🤩");
        break;
    case 6:
        printf("\n🤩 Sunday Means Funday 🤩");
        break;
    case 7:
        printf("\n🤩 Sunday Means Funday 🤩");
        break;
    default:
        puts("\n!!! Invalid Input....");
    }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
