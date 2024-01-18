// // C program to take input a number in Decimal form and print its Hexadecimal form

// // Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number (Use Decimal Number System) => ");
    scanf("%d", &num);
    printf("\nHexadecimal Representation of %d => %x\n", num, num); // // %x is used to print Hexadecimal form.

    getch();
    return 0;
}
// // Main Function End