// C program to convert Kilometers to Miles

// Header Files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define KM_IN_1_MILE 1.609344

// Main Function Start
int main()
{
    float mile, km;
    printf("\nEnter value in Kilometers to convert in Miles => ");
    scanf("%f", &km);
    mile = km / KM_IN_1_MILE;
    printf("\n%.4f Kilometer = %.4f Mile\n", km, mile);

    getch();
    return 0;
}