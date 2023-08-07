// C Program to Input Three Digit Number And Calculate Sum of It's Digit


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num, sumOfDigits = 0;
    printf("\nEnter A Three Digits Number => ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;


    // Without Loop If Entered Number Has Three Digits
    // sumOfDigits = num % 10 + num / 10 % 10 + num / 100;


    // Using Loop
    while (num)
    {
        sumOfDigits += num % 10;
        num /= 10;
    }

    printf("Sum of Digits => %d", sumOfDigits);

    getch();
    return 0;
}
// Main Function End
