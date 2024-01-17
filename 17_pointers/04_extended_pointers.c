// Write a program in C to demonstrate how to handle the extended concept of pointers.

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int x = 10;    // x is an ordinary variable
    int *p = &x;   // p is a pointer to an int variable
    int **q = &p;  // q is a pointer to a pointer to an int variable
    int ***r = &q; // r is a pointer to a pointer to a pointer to an int variable

    // Access value of x using these pointers
    printf("\nx => %d", x);
    printf("\n*p => %d", *p);
    printf("\n**q => %d", **q);
    printf("\n***r => %d", ***r);

    putch('\n');
    getch();
    return 0;
}
// Main Function End