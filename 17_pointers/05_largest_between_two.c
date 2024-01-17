// Write a program to find the largest number between two numbers using pointers.

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num1, num2, largest, *p, *q, *r;

    // Assign addresses to pointers
    p = &num1;
    q = &num2;
    r = &largest;

    printf("\nEnter Two Numbers to Find Largest => ");
    scanf("%d%d", p, q);

    // Find Largest
    *r = *p > *q ? *p : *q;

    printf("\nLargest => %d", *r);

    putch('\n');
    getch();
    return 0;
}
// Main Function End