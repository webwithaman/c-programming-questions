// WAP which takes the day number of a week and displays a unique greeting message for the day.

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    //    int dayNumber;
       printf("\nEnter Any Day Number of the Week => ");

    
        switch (dayN)
        {
        case 'a':
            printf("\n%f + %f => %f", num1, num2, num1 + num2);
            break;
        case 'b':
            printf("\n%f - %f => %f", num1, num2, num1 - num2);
            break;
        case 'c':
            printf("\n%f x %f => %f", num1, num2, num1 * num2);
            break;
        
            printf("\n%f / %f => %f", num1, num2, num1 / num2);
            break;
        case 'e':
            printf("\nProgram End...");
            exit(0);
            break;
        default:
            puts("\n!!! Invalid Choice....");
        }

        getch();
    }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
