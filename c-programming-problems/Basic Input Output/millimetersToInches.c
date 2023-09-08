// C Program to Convert Millimeters to Inches

// Header files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define inchesInOneMillimeter 0.03937007874;


// Main Function Start
int main()
{

    float millimeters, inches;
    printf("\nEnter Length in Millimeters => ");
    scanf("%f", &millimeters);

    inches = millimeters * inchesInOneMillimeter;

    printf("\n%.2f Millimeters => %.2f Inches", millimeters, inches);

    getch();
    return 0;
}
// Main Function End
