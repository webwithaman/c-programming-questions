// C Program to Print Table of 8

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 8;    // Table of n
    int end = 10; // Till end


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
