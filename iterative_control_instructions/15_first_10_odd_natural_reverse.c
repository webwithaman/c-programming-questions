// C program to print the first N odd natural numbers in reverse order

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int n;
    printf("\nEnter N to Print First N Odd Natural Numbers In Reverse Order => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    printf("\n>>>>>>>> First %d Odd Natural Numbers In Reverse Order <<<<<<<<\n", n);

    // //  1st Approach (using while loop)
    int i = n;
    while (i)
    {
        printf("\n%d", i * 2 - 1);
        i--;
    }

    // // 2nd Approach (using while loop)
    // int i = n * 2 - 1;
    // while (i > 0)
    // {
    //     printf("\n%d", i);
    //     i -= 2;
    // }

    // // 3rd Approach (using while loop)
    // int i = n * 2 -1;
    // while (i)
    // {
    //     if (i % 2)
    //         printf("\n%d", i);
    //     i--;
    // }

    // // 4th Approach (using do-while loop)
    // int i = n;
    // do
    // {
    //     printf("\n%d", i * 2 - 1);
    //     i--;
    // } while (i);

    // // 5th Approach (using do-while loop)
    // int i = n * 2 -1;
    // do
    // {
    //     printf("\n%d", i);
    //     i -= 2;
    // } while (i > 0);

    // // 6th Approach (using do-while loop)
    // int i = n * 2 -1;
    // do
    // {
    //     if (i % 2)
    //         printf("\n%d", i);
    //     i--;
    // } while (i);

    // // 7th Approach (using for loop)
    // for (int i = n; i; i--)
    //     printf("\n%d", i * 2 - 1);

    // // 8th Approach (using for loop)
    // for (int i = n * 2 -1; i > 0; i -= 2)
    //     printf("\n%d", i);

    // // 9th Approach (using for loop)
    // for (int i = n * 2 -1; i; i--)
    // {
    //     if (i % 2)
    //         printf("\n%d", i);
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
