// C program to take input a number in Hexadecimal form and print its Decimal form

// Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number in Hexadecimal Form (Use Hexadecimal Number System) => ");
    scanf("%x", &num);
    printf("\nDecimal Representation of %x => %d\n", num, num); // %d is used to print Decial form.

    getch();
    return 0;
}
// // Main Function End