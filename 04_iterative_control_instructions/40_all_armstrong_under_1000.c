// C program to print all Armstrong numbers under 1000

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    int copyNum, numOfDigits = 0;
    float sum = 0;

    printf("\n>>>>>>>>>>> All Armstrong Numbers Under 1000 <<<<<<<<<<\n");

    for (int num = 0; num <= 1000; num++)
    {

        copyNum = num;
        numOfDigits = 0;
        sum = 0;

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
            printf("%d ", num);
    }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
