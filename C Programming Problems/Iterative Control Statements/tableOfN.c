// C Program to Print Table of N

// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n, end = 10;
    printf("\nWhich Number's Table You Want to Print => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
        n = -n;

    printf("\n>>>>>>>>>>> Table of %d <<<<<<<<<<<<<\n", n);

    // Using while loop
    int i = 1;
    while (i <= end)
    {
        printf("\n%d x %2d => %d", n, i, n * i);
        i++;
    }

    // Using do-while loop
    // int i = 1;
    // do
    // {
    //     printf("\n%d x %2d => %d", n, i, n * i);
    //     i++;
    // } while (i <= end);

    // Using for loop
    // for (int i = 1; i <= end; i++)
    //     printf("\n%d x %2d => %d", n, i, n * i);

    getch();
    return 0;
}
// Main Function End
