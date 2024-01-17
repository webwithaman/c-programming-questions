// C program to take input a number in Octal form and print its Decimal form

// Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number in Octal Form (Use Octal Number System) => ");
    scanf("%o", &num);
    printf("\nDecimal Representation of %o => %d\n", num, num); // %d is used to print Decial form.

    getch();
    return 0;
}
// // Main Function End