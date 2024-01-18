// //  C program to convert Fahrenheit to Celcius.

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    float cel, fah;
    printf("\nEnter value in Fahrenheit to convert in Celcius => ");
    scanf("%f", &fah);
    cel = (fah - 32) * 5 / 9;
    printf("\n%.4f Fahrenheit = %.4f Celcius\n", fah, cel);

    getch();
    return 0;
}
// // Main Function End
