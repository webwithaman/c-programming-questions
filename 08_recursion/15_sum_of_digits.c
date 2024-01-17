// Write a recursive function to calculate sum of digits of a given number.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Function Declaration (Prototype)
int sumOfDigits(int);

// Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    printf("\nSum of Digits of %d => %d", num, sumOfDigits(num));

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Calculate Sum of Digits of A Number
int sumOfDigits(int num)
{
    if (num == 0)
        return 0;

    return ((int)fabs(num) % 10) + sumOfDigits(num / 10);
}