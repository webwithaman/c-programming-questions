// //  C program to calculate factorial of a number

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int n;
    double fact = 1;
    printf("\nEnter A Number to Find Factorial => ");
    scanf("%d", &n);

    // // 1st Approach (using for loop)
    // for (int i = n; i > 1; i--)
    //     fact *= i;

    // // 2nd Approach (using do-while loop)
    // int i = 2;
    // do
    // {
    //     fact *= i++;
    // } while (i <= n);

    // //  3rd Approach (using while loop)
    // int i = 2;
    // while (i <= n)
    //     fact *= i++;

    printf("\nFactorial of %d (General Form ) => %lf\n", n, fact);
    printf("\nFactorial of %d (Scientific Form )=> %e", n, fact);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
