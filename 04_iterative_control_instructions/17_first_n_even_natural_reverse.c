// C program to print the first N even natural numbers in reverse order

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    int n;
    printf("\nEnter N to Print First N Even Natural Numbers In Reverse Order => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    printf("\n>>>>>>>> First %d Even Natural Numbers In Reverse Order <<<<<<<<\n", n);

    // //  1st Approach (using while loop)
    int i = n;
    while (i)
    {
        printf("\n%d", i * 2);
        i--;
    }

    // // 2nd Approach (using while loop)
    // int i = n * 2;
    // while (i)
    // {
    //     printf("\n%d", i);
    //     i -= 2;
    // }

    // // 3rd Approach (using while loop)
    // int i = n * 2;
    // while (i)
    // {
    //     if (i % 2 == 0)
    //         printf("\n%d", i);
    //     i--;
    // }

    // // 4th Approach (using do-while loop)
    // int i = n;
    // do
    // {
    //     printf("\n%d", i * 2);
    //     i--;
    // } while (i);

    // // 5th Approach (using do-while loop)
    // int i = n * 2;
    // do
    // {
    //     printf("\n%d", i);
    //     i -= 2;
    // } while (i);

    // // 6th Approach (using do-while loop)
    // int i = n * 2;
    // do
    // {
    //     if (i % 2 == 0)
    //         printf("\n%d", i);
    //     i--;
    // } while (i);

    // // 7th Approach (using for loop)
    // for (int i = n; i; i--)
    //     printf("\n%d", i * 2 );

    // // 8th Approach (using for loop)
    // for (int i = n * 2; i ; i -= 2)
    //     printf("\n%d", i);

    // // 9th Approach (using for loop)
    // for (int i = n * 2; i; i--)
    // {
    //     if (i % 2 == 0)
    //         printf("\n%d", i);
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
