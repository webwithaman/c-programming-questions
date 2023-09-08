// C Program to Convert Persons's height Inches to Centimeters


// Header files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define centimetersInOneInch 2.54

// Main Function Start
int main()
{

    float inches,centimeters;
    printf("\nEnter Height In Inches => ");
    scanf("%f",&inches);

    centimeters = inches * centimetersInOneInch;

    printf("\n%.2f Inches => %.2f Centimeters\n",inches,centimeters);

    getch();
    return 0;
}
// Main Function End
