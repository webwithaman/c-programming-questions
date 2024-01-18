// //  C program to print Unit digit of a number

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);

    printf("\nUnit Digit of %d => %d\n", num, num < 0 ? -num % 10 : num % 10);

    getch();
    return 0;
}
// // Main Function End
