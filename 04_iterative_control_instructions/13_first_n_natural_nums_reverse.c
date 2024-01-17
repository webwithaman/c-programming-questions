//  C program to print the first N natural numbers in reverse order

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int n;
    printf("\nEnter N to Print First N Natural Numbers In Reverse Order => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    printf("\n>>>>>>>> First %d Natural Numbers In Reverse Order <<<<<<<<\n", n);

    //  1st Approach (using while loop)
    int i = n;
    while (i)
    {
        printf("\n%d", i);
        i--;
    }

    // 2nd Approach (using while loop)
    // int i = n;
    // while (i)
    //     printf("\n%d", i--);

    // 3rd Approach (using while loop)
    // int i = 1;
    // while (i <= n)
    //     printf("\n%d", n + 1 - i++);

    // 4th Approach (using do-while loop)
    // int i = n;
    // do
    // {
    //     printf("\n%d", i);
    //     i--;
    // } while (i > 0);

    // 5th Approach (using do-while loop)
    // int i = n;
    // do
    // {
    //     printf("\n%d", i--);
    // } while (i);

    // 6th Approach (using do-while loop)
    // int i = 1;
    // do
    // {
    //     printf("\n%d", n + 1 - i++);
    // } while (i <= 10);

    // 7th Approach (using for loop)
    // for (int i = n; i; i--)
    //     printf("\n%d", i);

    // 8th Approach (using for loop)
    // for (int i = 1; i <= n; i++)
    //     printf("\n%d", n + 1 - i);

    printf("\n");
    getch();
    return 0;
}
// Main Function End
