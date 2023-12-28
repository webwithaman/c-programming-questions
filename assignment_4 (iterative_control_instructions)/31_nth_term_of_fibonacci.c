// C program to find nth term of fibonacci series

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int n;
    printf("\nEnter N to Find Nth term of Fibonacci Series => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    // // 1st Approach (If Series Starting From 0,1,1,2,3,5,8.......)
    int prev = -1, next = 1, result, count = 1;
    for (int count = 1; count <= n; count++)
    {
        result = prev + next;
        prev = next;
        next = result;
    }
    printf("\n%dth term of Fibonacci Series => %d", n, result);

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
    // }
    // printf("\n%dth term of Fibonacci Series => %d", n, result);

    printf("\n");
    getch();
    return 0;
}