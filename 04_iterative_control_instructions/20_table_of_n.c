// C program to print a table of N

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int n;
    printf("\nEnter N to Print Table of N => ");
    scanf("%d", &n);

    printf("\n>>>>>>>>>> Table of %d <<<<<<<<<<\n", n);

    // //  1st Approach (using while loop)
    int i = 1;
    while (i <= 10)
    {
        printf("\n%d x %2d = %d", n, i, n * i);
        i++;
    }

    // // 2nd Approach (using while loop)
    // int i = 0;
    // while (i++ < 10)
    // printf("\n%d x %2d = %d", n, i, n * i);

    // // 3rd Approach (using do-while loop)
    // int i = 1;
    // do
    // {
    //     printf("\n%d x %2d = %d", n, i, n * i);
    //     i++;
    // } while (i <= 10);

    // // 4th Approach (using for loop)
    // for (int i = 1; i <= 10; i++)
    //     printf("\n%d x %2d = %d", n, i, n * i);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
