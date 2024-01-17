// //  C program to print first N terms of fibonacci series

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    int n;
    printf("\nEnter N to Print First N terms of Fibonacci Series => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    printf("\n>>>>>>>>>> First %d terms of Fibonacci Series <<<<<<<<<<\n");

    // // 1st Approach (If Series Starting From 0,1,1,2,3,5,8.......)
    int prev = -1, next = 1, result, count = 1;
    for (int count = 1; count <= n; count++)
    {
        result = prev + next;
        prev = next;
        next = result;
        printf("%d ", result);
    }

    // // 2nd Approach (If Series Starting From 1,1,2,3,5,8.......)
    // int prev = 0, next = 1, result, count = 1;
    // for (int count = 1; count <= n; count++)
    // {
    //     if (count == 1)
    //         result = 1;
    //     else
    //     {
    //         result = prev + next;
    //         prev = next;
    //         next = result;
    //     }
    //     printf("%d ", result);
    // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
