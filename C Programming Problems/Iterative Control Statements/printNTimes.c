// C Program to Print Web With Aman N Times On Screen

// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n;
    printf("\nHow Many Times to You Want to Print => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
        n = -n;

    printf("\n>>>>>>>>>>> Printing \"Web With Aman\" %d Times <<<<<<<<<<<<<\n", n);

    // 1st Approach (While loop)
    int i = 1;
    while (i <= n)
    {
        printf("\nWeb With Aman");
        i++;
    }


    // 2nd Approach (While loop)
    // int i = 1;
    // while (i++ <= n)
    //     printf("\nWeb With Aman");


    // 3rd Approach (While loop)
    // int copyOfN = n;
    // while (copyOfN)
    // {
    //     printf("\nWeb With Aman");
    //     copyOfN--;
    // }

    // 4th Approach (while loop)
    // int copyOfN = n;
    // while (copyOfN--)
    //     printf("\nWeb With Aman");


    // 5th Approach (do while loop)
    // int copyOfN = n;
    // do
    // {
    //     printf("\nWeb With Aman");
    // } while (--copyOfN);


    // 6th Approach (do while loop)
    // int i = 1;
    // do
    // {
    //     printf("\nWeb With Aman");
    //     i++;
    // } while (i <= n);


    // 7th Approach (do while loop)
    // int i = 1;
    // do
    // {
    //     printf("\nWeb With Aman");
    // } while (++i <= n);


    // 8th Approach (for loop)
    // for (int i = 1; i <= n; i++)
    //     printf("\nWeb With Aman");


    // 9th Approach (for loop)
    // for (int i = n; i; i--)
    //     printf("\nWeb With Aman");


    getch();
    return 0;
}
// Main Function End
