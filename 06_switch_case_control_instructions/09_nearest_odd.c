// Program to Convert even number into its upper nearest odd number Switch Statement

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num, result;
    printf("\nEnter An Even Number => ");
    scanf("%d", &num);

    switch (num & 1)
    {
    case 0:
        result = num + 1;
        printf("\nUpper Neartest Odd Number of %d is %d", num, result);
        break;
    default:
        printf("\n%d is Odd Number",num);
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
