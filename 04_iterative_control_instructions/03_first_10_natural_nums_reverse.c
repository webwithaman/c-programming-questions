// //  C program to print the first 10 natural numbers in reverse order

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    printf("\n>>>>>>>>> First 10 Natural Numbers In Reverse Order <<<<<<<<<\n");

    // //  1st Approach (using while loop)
    int i = 10;
    while (i)
    {
        printf("\n%d", i);
        i--;
    }

    // // 2nd Approach (using while loop)
    // int i = 10;
    // while (i)
    //     printf("\n%d", i--);

    // 3rd Approach (using while loop)
    // int i = 1;
    // while (i <= 10)
    //     printf("\n%d", 11 - i++);

    // // 4th Approach (using do-while loop)
    // int i = 10;
    // do
    // {
    //     printf("\n%d", i);
    //     i--;
    // } while (i > 0);

    // // 5th Approach (using do-while loop)
    // int i = 10;
    // do
    // {
    //     printf("\n%d", i--);
    // } while (i);

    // // 6th Approach (using do-while loop)
    // int i = 1;
    // do
    // {
    //     printf("\n%d", 11 - i++);
    // } while (i <= 10);

    // // 7th Approach (using for loop)
    // for (int i = 10; i; i--)
    //     printf("\n%d", i);

    // // 8th Approach (using for loop)
    // for (int i = 1; i <= 10; i++)
    //     printf("\n%d", 11 - i);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
