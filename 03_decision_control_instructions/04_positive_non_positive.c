// C program to check whether a given number is positive or non-positive

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter a number to check whether it is Positive or Non-Positive => ");
    scanf("%d", &num);

    if (num > 0)
        printf("\n%d is Positive", num);
    else
        printf("\n%d is Non-Positive", num);

    printf("\n");
    getch();
    return 0;
}
// Main Function End
