// C program to convert Millimeters to Inches

// Header Files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define CM_IN_1_INCH 2.54
#define MM_IN_1_CM 10

// Main Function Start
int main()
{
    float mm, in;
    printf("\nEnter value in Millimeters to convert in Inches => ");
    scanf("%f", &mm);
    in = mm / MM_IN_1_CM / CM_IN_1_INCH;
    printf("\n%.4f Millimeter = %.4f Inches\n", mm, in);

    getch();
    return 0;
}