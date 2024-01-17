// Program to convert a positive number into a negative number and negative number into a positive number using a switch statement

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num, result;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    switch (num != 0)
    {
    case 1:
        result = -num;
        printf("\n%d Convert Into %d", num, result);
        break;
    default:
        printf("\nEntered Number is Zero");
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
