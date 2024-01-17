// C program to calculte sum of squares of first N natural numbers

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    int n, sum = 0;
    printf("\nEnter N to Calculate Sum of Squares of First N Natural Numbers => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    // // 1st Approach (using for loop)
    for (int i = 1; i <= n; i++)
        sum += i * i;

    // // 2nd Approach (using do-while loop)
    // int i = 1;
    // do
    // {
    //     sum += i * i;
    //     i++;
    // } while (i <= n);

    // //  3rd Approach (using while loop)
    // int i = 1;
    // while (i <= n){
    //     sum += i * i;
    //     i++;
    //  }

    printf("\nSum of Squares of First %d Natural Numbers => %d", n, sum);

    printf("\n");
    getch();
    return 0;
}
// Main Function End
