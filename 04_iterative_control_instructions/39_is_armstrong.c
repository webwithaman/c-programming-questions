// C program to to check whether a given number is an Armstrong number or not

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number to Check Whether It is Armstrong or Not => ");
    scanf("%d", &num);

    // Handling Invalid Input
    if (num < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    int copyNum = num, numOfDigits = 0;
    float sum = 0;

    // count digits in number
    while (copyNum)
    {
        numOfDigits++;
        copyNum /= 10;
    }

    copyNum = num;
    while (copyNum)
    {
        sum += pow(copyNum % 10, numOfDigits);
        copyNum /= 10;
    }

    if (sum == num)
        printf("\n%d is An Armstrong Number", num);
    else
        printf("\n%d is Not An Armstrong Number", num);

    printf("\n");
    getch();
    return 0;
}
// Main Function End
