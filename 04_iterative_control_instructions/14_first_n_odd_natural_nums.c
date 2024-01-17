//  C program to print the first N odd natural numbers

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int n;
    printf("\nEnter N to Print First N Odd Natural Numbers => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    printf("\n>>>>>>>> First %d Odd Natural Numbers <<<<<<<<\n", n);

    //  1st Approach (using while loop)
    int i = 1;
    while (i <= n)
    {
        printf("\n%d", i * 2 - 1);
        i++;
    }

    // 2nd Approach (using while loop)
    // int i = 1;
    // while (i <= n*2)
    // {
    //     printf("\n%d", i);
    //     i += 2;
    // }

    // 3rd Approach (using while loop)
    // int i = 1;
    // while (i <= n*2)
    // {
    //     if (i % 2)
    //         printf("\n%d", i);
    //     i++;
    // }

    // 4th Approach (using do-while loop)
    // int i = 1;
    // do
    // {
    //     printf("\n%d", i * 2 - 1);
    // } while (++i <= n);

    // 5th Approach (using do-while loop)
    // int i = 1;
    // do
    // {
    //     printf("\n%d", i);
    //     i += 2;
    // } while (i <= n*2);

    // 6th Approach (using do-while loop)
    // int i = 1;
    // do
    // {
    //     if (i % 2)
    //         printf("\n%d", i);
    //     i++;
    // } while (i <= n*2);

    // 7th Approach (using for loop)
    // for (int i = 1; i <= n; i++)
    //     printf("\n%d", i * 2 - 1);

    // 8th Approach (using for loop)
    // for (int i = 1; i <= n*2; i += 2)
    //     printf("\n%d", i);

    // 9th Approach (using for loop)
    // for (int i = 1; i <= n*2; i++)
    // {
    //     if (i % 2)
    //         printf("\n%d", i);
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
