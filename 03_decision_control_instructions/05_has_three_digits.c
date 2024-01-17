// C program to check whether a given number is a three-digit number or not

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter a number => ");
    scanf("%d", &num);

    if (num > 99 && num < 1000 || num < -99 && num > -1000)
        printf("\n%d is a Three Digit Number", num);
    else
        printf("\n%d is not a Three Digit Number", num);

    printf("\n");
    getch();
    return 0;
}
// Main Function End
