// C program to print the first N natural numbers

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    int n;
    printf("\nEnter N to Print First N Natural Numbers => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    printf("\n>>>>>>>> First %d Natural Numbers <<<<<<<<\n", n);

    // //  1st Approach (using while loop)
    int i = 1;
    while (i <= n)
    {
        printf("\n%d", i);
        i++;
    }

    // // 2nd Approach (using while loop)
    // int i = 0;
    // while (i++ < n)
    //     printf("\n%d", i);

    // // 3rd Approach (using do-while loop)
    // int i = 1;
    // do
    // {
    //     printf("\n%d", i);
    //     i++;
    // } while (i <= n);

    // // 4th Approach (using do-while loop)
    // int i = 0;
    // do
    // {
    //     printf("\n%d", i + 1);
    // } while (++i < n);

    // // 5th Approach (using for loop)
    // for (int i = 1; i <= n; i++)
    //     printf("\n%d", i);

    printf("\n");
    getch();
    return 0;
}
// Main Function End
