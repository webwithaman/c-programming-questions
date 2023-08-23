// C Program to Calculate Sum of First N Natural Numbers


// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>


// Main Function Start
int main()
{
    int n, sum = 0;
    printf("\nEnter N to Calculate Sum of First N Natural Numbers => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
        n = -n;


    // Without loop Using Formula
    // sum = n * (n+1)/2;

    // Using while loop
    int i = 1;
    while (i <= n)
        sum += i++;

    // Using do while loop
    // int i=1;
    // do
    // {
    //     sum+=i++;
    // } while (i <= n);

    // Using for loop
    // for (int i = 1; i <= n; i++)
    //     sum += i;

    printf("\nSum of First %d Natural Numbers => %d\n", n, sum);

    getch();
    return 0;
}
// Main Function End
