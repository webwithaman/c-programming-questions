// C Program to Print All Armstrong Numbers Under 1000

// Header files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start
int main()
{

    printf("\n>>>>>>>>>> All Armstrong Numbers Under 1000 <<<<<<<<<<\n");


    int numOfDigits = 0, copyOfNum;
    double sum = 0;

    for (int i = 0; i < 1000; i++)
    {
        copyOfNum = i;

        // Count Digits In Given Number
        while (copyOfNum)
        {
            copyOfNum /= 10;
            numOfDigits++;
        }

        // Logic to Check for Armstrong
        copyOfNum = i;

        while (copyOfNum)
        {
            sum += pow(copyOfNum % 10, numOfDigits);
            copyOfNum /= 10;
        }

        if (i == sum)
            printf("%d ", i);

        numOfDigits = sum = 0;
    }


    getch();
    return 0;
}
// Main Function End
