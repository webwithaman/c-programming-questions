// C Program to Print First N Odd Natural Numbers In Reverse Order

// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n;
    printf("\nHow Many First Odd Natural Numbers You Want to Print In Reverse  => ");
    scanf("%d", &n);

    // Handling Wrong or Invalid Input
    n = n < 0 ? -n % INT_MAX : n % INT_MAX;

    printf("\n>>>>>>>>>>> First %d Odd Natural Numbers In Reverse Order <<<<<<<<<<<<<\n", n);


    // 1st Approach
    for (int i = n; i; i--)
        printf("\n%d", i * 2 - 1);

    // 2nd Approach
    // for (int i = n * 2 - 1; i > 0; i -= 2)
    //     printf("\n%d", i);

    // 3rd Approach
    // for (int i = n * 2 - 1; i; i--)
    // {
    //     if (i & 1) // we can also write if(i%2)
    //         printf("\n%d", i);
    // }

    getch();
    return 0;
}
// Main Function End
