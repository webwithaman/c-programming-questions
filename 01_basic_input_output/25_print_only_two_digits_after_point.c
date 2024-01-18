// // C program to take a floating point number and print only two digits after the decimal point.

// // Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    float num;
    printf("\nEnter A Decimal Number (Number with Decimal Point) => ");
    scanf("%f", &num); // // %2d means scanf() will take only first 2 digits of number that will be entered
    printf("\n%f With Only Two Digits After Point => %.2f\n", num, num);

    getch();
    return 0;
}
// // Main Function End