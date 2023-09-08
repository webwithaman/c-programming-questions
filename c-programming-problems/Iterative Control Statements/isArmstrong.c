// C Program to Check Whether A Given Number is Armstrong or Not

// Header files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Check Whether It is Armstrong or Not => ");
    scanf("%d", &num);

    int numOfDigits = 0, copyOfNum = num;
    double sum = 0;

    // Count Digits In Given Number
    while (copyOfNum)
    {
        copyOfNum /= 10;
        numOfDigits++;
    }

    // Logic to Check for Armstrong
    copyOfNum = num;
    while (copyOfNum)
    {
        sum += pow(copyOfNum % 10, numOfDigits);
        copyOfNum /= 10;
    }

    if (num == sum)
        printf("\n%d is An Armstrong Number\n", num);
    else
        printf("\n%d is Not An Armstrong Number\n", num);

    getch();
    return 0;
}
// Main Function End
