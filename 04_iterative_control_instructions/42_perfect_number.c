// // C program to check whether a given number is a Perfect number or Not

// // A perfect number is a positive integer which is equal to the sum of its positive factors (or divisor) excluding the number itself. Suppose the factors of the number 6 are 1, 2, 3 and 6. Now, 1 + 2 + 3 = 6, this satisfies the condition of being a perfect number

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    int num, sum = 1;
    printf("\nEnter A Number to Check Whether It is a Perfect Number or Not => ");
    scanf("%d", &num);
    int copyNum = num;

    // // Handling Invalid Input
    if (num < 0)
    {
        printf("!!! Invalid Input...Please Enter Positive Number");
        exit(0);
    }
    else if (num == 1)
    {
        printf("\n1 is Not A Perfect Number");
        exit(0);
    }
    else if (num == 0)
    {
        printf("\n0 is A Perfect Number");
        exit(0);
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == copyNum)
        printf("\n%d is A Perfect Number", copyNum);
    else
        printf("\n%d is Not A Perfect Number", copyNum);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
