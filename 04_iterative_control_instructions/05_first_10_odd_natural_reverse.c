// //  C program to print the first 10 odd natural numbers in reverse order

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    printf("\n>>>>>>>>> First 10 Odd Natural Numbers In Reverse Order <<<<<<<<<\n");

    // //  1st Approach (using while loop)
    int i = 10;
    while (i)
    {
        printf("\n%d", i * 2 - 1);
        i--;
    }

    // // 2nd Approach (using while loop)
    // // int i = 19;
    // // while (i > 0)
    // // {
    // //     printf("\n%d", i);
    // //     i -= 2;
    // // }

    // // 3rd Approach (using while loop)
    // // int i = 19;
    // // while (i)
    // // {
    // //     if (i % 2)
    // //         printf("\n%d", i);
    // //     i--;
    // // }

    // // 4th Approach (using do-while loop)
    // // int i = 10;
    // // do
    // // {
    // //     printf("\n%d", i * 2 - 1);
    // //     i--;
    // // } while (i);

    // // 5th Approach (using do-while loop)
    // // int i = 19;
    // // do
    // // {
    // //     printf("\n%d", i);
    // //     i -= 2;
    // // } while (i > 0);

    // // 6th Approach (using do-while loop)
    // // int i = 19;
    // // do
    // // {
    // //     if (i % 2)
    // //         printf("\n%d", i);
    // //     i--;
    // // } while (i);

    // // 7th Approach (using for loop)
    // // for (int i = 10; i; i--)
    // //     printf("\n%d", i * 2 - 1);

    // // 8th Approach (using for loop)
    // // for (int i = 19; i > 0; i -= 2)
    // //     printf("\n%d", i);

    // // 9th Approach (using for loop)
    // // for (int i = 19; i; i--)
    // // {
    // //     if (i % 2)
    // //         printf("\n%d", i);
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
