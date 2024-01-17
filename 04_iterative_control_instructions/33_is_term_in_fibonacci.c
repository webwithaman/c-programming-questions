// C program to check whether a given number is in the Fibonacci series or not

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number to Check Whether it is in the Fibonacci Series or Not => ");
    scanf("%d", &num);

    // // 1st Approach (If Series Starting From 0,1,1,2,3,5,8.......)
    int prev = -1, next = 1, result = 0;
    while (result < num)
    {
        result = prev + next;
        prev = next;
        next = result;
    }
    if (result == num)
        printf("\nYes, %d is a term in Fibonacci Series", num);
    else
        printf("\nNo, %d is not a term in Fibonacci Series", num);

    // // 2nd Approach (If Series Starting From 1,1,2,3,5,8.......)
    // int prev = 0, next = 1, result = 1;
    // while (result < num)
    // {
    //     result = prev + next;
    //     prev = next;
    //     next = result;
    // }

    // if (result == num)
    //     printf("\nYes, %d is a term in Fibonacci Series", num);
    // else
    //     printf("\nNo, %d is not a term in Fibonacci Series", num);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
