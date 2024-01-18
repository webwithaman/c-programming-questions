// // Write a function to check whether a given number contains a given digit or not. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
int isContainsDigit(int, int);

// // Main Function Start
int main()
{
    int num, digit;
    printf("\nEnter An Integer Number => ");
    scanf("%d", &num);
    printf("\nEnter A Positive Digit to Check Whether the Entered Number Contains the Digit or Not => ");
    scanf("%1d", &digit);

    int result = isContainsDigit(num, digit);

    if (result == 1)
        printf("\nYes, %d Contains Digit %d", num, digit);
    else
        printf("\nNo, %d Does not Contains Digit %d", num, digit);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Calculate Factorial of A Number
int isContainsDigit(int num, int digit)
{
    if (num == 0 && digit == 0)
        return 1;

    while (num)
    {
        if (num % 10 == digit)
            return 1;
        num /= 10;
    }

    return 0;
}
