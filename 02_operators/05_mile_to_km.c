//  C program to convert Miles to Kilometers

// Header Files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define KM_IN_1_MILE 1.609344

// Main Function Start
int main()
{
    float mile, km;
    printf("\nEnter value in Miles to convert in Kilometers => ");
    scanf("%f", &mile);
    km = mile * KM_IN_1_MILE;
    printf("\n%.4f Mile = %.4f Kilometer\n", mile, km);

    getch();
    return 0;
}
// Main Function End
