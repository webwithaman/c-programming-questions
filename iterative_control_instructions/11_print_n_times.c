// C program to print C-Programming N times on the screen

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int n;
    printf("\nEnter N to Print C-Programming N Times => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    printf("\n>>>>>>>> C-Programming %d Times <<<<<<<<\n", n);

    // //  1st Approach (using while loop)
    int i = 0;
    while (i < n)
    {
        printf("\nC-Programming");
        i++;
    }

    // // 2nd Approach (using while loop)
    // int i = 0;
    // while (i++ < n)
    //     printf("\nC-Programming");

    // // 3rd Approach (using do-while loop)
    // int i = 0;
    // do
    // {
    //     printf("\nC-Programming");
    //     i++;
    // } while (i < n);

    // // 4th Approach (using do-while loop)
    // int i = 0;
    // do
    // {
    //     printf("\nC-Programming");
    // } while (++i < n);

    // // 5th Approach (using for loop)
    // for (int i = 0; i < n; i++)
    //     printf("\nC-Programming");

    printf("\n");
    getch();
    return 0;
}