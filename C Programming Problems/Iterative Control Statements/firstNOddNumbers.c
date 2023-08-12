// C Program to Print First N Odd Natural Numbers

// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n;
    printf("\nHow Many First Odd Natural Numbers You Want to Print => ");
    scanf("%d", &n);

    // Handling Wrong or Invalid Input
    n = n < 0 ? -n % INT_MAX : n % INT_MAX;

    printf("\n>>>>>>>>>>> First %d Odd Natural Numbers <<<<<<<<<<<<<\n", n);

    // 1st Approach
    for (int i = 1; i <= n; i++)
        printf("\n%d", i * 2 - 1);

    // 2nd Approach
    // for (int i = 1; i <= n*2; i+=2)
    //     printf("\n%d", i);

    // 3rd Approach
    // for (int i = 1; i <= n * 2; i++)
    // {
    //     if (i % 2) // we can also write if(i&1)
    //         printf("\n%d", i);
    // }

    getch();
    return 0;
}
// Main Function End
