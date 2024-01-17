// C program to print the first 10 even natural numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    printf("\n>>>>>>>>> First 10 Even Natural Numbers <<<<<<<<<\n");

    // //  1st Approach (using while loop)
    int i = 1;
    while (i <= 10)
    {
        printf("\n%d", i * 2);
        i++;
    }

    // // 2nd Approach (using while loop)
    // int i = 2;
    // while (i <= 20)
    // {
    //     printf("\n%d", i);
    //     i += 2;
    // }

    // // 3rd Approach (using while loop)
    // int i = 2;
    // while (i <= 20)
    // {
    //     if (!(i & 1))
    //         printf("\n%d", i);
    //     i++;
    // }

    // // 4th Approach (using do-while loop)
    // int i = 1;
    // do
    // {
    //     printf("\n%d", i * 2);
    // } while (++i <= 10);

    // // 5th Approach (using do-while loop)
    // int i = 2;
    // do
    // {
    //     printf("\n%d", i);
    //     i += 2;
    // } while (i <= 20);

    // // 6th Approach (using do-while loop)
    // int i = 2;
    // do
    // {
    //     if (!(i & 1))
    //         printf("\n%d", i);
    //     i++;
    // } while (i <= 20);

    // // 7th Approach (using for loop)
    // for (int i = 1; i <= 10; i++)
    //     printf("\n%d", i * 2 );

    // // 8th Approach (using for loop)
    // for (int i = 2; i <= 20; i += 2)
    //     printf("\n%d", i);

    // // 9th Approach (using for loop)
    // for (int i = 2; i <= 20; i++)
    // {
    //     if (!(i % 2))
    //         printf("\n%d", i);
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
