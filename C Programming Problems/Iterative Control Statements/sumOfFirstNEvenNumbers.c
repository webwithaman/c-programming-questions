// C Program to Calculate Sum of First N Even Natural Numbers

// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n, sum = 0;
    printf("\nEnter N to Calculate Sum of First N Even Natural Numbers => ");
    scanf("%d", &n);

    // Handling Wrong or Invalid Input
    n = n < 0 ? -n % INT_MAX : n % INT_MAX;


    // Using while loop
    int i = 1;
    while (i <= n)
        sum += i++ * 2;

    // Using do while loop
    // int i=1;
    // do
    // {
    //     sum+=i*2;
    // } while (++i <= n);

    // Using for loop
    // for (int i = 1; i <= n; i++)
    //     sum += i * 2;

    printf("\nSum of First %d Even Natural Numbers => %d\n", n, sum);

    getch();
    return 0;
}
// Main Function End
