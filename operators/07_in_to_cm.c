// C program to convert Inches to Centimeters

// Header Files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define CM_IN_1_INCH 2.54

// Main Function Start
int main()
{
    float cm, in;
    printf("\nEnter value in Inches to convert in Centimeters => ");
    scanf("%f", &in);
    cm = in * CM_IN_1_INCH;
    printf("\n%.4f Inch = %.4f Centimeter\n", in, cm);

    getch();
    return 0;
}