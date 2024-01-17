// C program to input Three Digit Number and calculate Sum of it's Digits

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{
    int num, sumOfDigits;
    printf("\nEnter A Three Digits Positive Integer => ");
    scanf("%3d", &num);

    if (num <= 0 || num < 100)
    {
        printf("\nInvalid Input !!!\nPlz Enter Three Digits Positive Integer\n\n");
        exit(0);
    }

    sumOfDigits = num / 100 + num / 10 % 10 + num % 10;

    printf("\nSum of Digits of %d => %d\n", num, sumOfDigits);

    getch();
    return 0;
}
// // Main Function End
