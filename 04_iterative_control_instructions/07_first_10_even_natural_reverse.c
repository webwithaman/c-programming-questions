// //  C program to print the first 10 even natural numbers in reverse order

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    printf("\n>>>>>>>>> First 10 Even Natural Numbers In Reverse Order <<<<<<<<<\n");

    // //  1st Approach (using while loop)
    int i = 10;
    while (i)
    {
        printf("\n%d", i * 2);
        i--;
    }

    // // 2nd Approach (using while loop)
    // int i = 20;
    // while (i)
    // {
    //     printf("\n%d", i);
    //     i -= 2;
    // }

    // // 3rd Approach (using while loop)
    // int i = 20;
    // while (i)
    // {
    //     if (i % 2 == 0)
    //         printf("\n%d", i);
    //     i--;
    // }

    // // 4th Approach (using do-while loop)
    // int i = 10;
    // do
    // {
    //     printf("\n%d", i * 2);
    //     i--;
    // } while (i);

    // // 5th Approach (using do-while loop)
    // int i = 20;
    // do
    // {
    //     printf("\n%d", i);
    //     i -= 2;
    // } while (i);

    // // 6th Approach (using do-while loop)
    // int i = 20;
    // do
    // {
    //     if (i % 2 == 0)
    //         printf("\n%d", i);
    //     i--;
    // } while (i);

    // // 7th Approach (using for loop)
    // for (int i = 10; i; i--)
    //     printf("\n%d", i * 2 );

    // // 8th Approach (using for loop)
    // for (int i = 20; i ; i -= 2)
    //     printf("\n%d", i);

    // // 9th Approach (using for loop)
    // for (int i = 20; i; i--)
    // {
    //     if (i % 2 == 0)
    //         printf("\n%d", i);
    // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
