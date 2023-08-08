// C Program to Convert Km (Kilometers) to Meters


// Header files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define meterInOneKm 1000;

// Main Function Start
int main()
{

    float kilometers,meters;
    

    printf("\nEnter Distance In Kilometers => ");
    scanf("%f", &kilometers);

    meters = kilometers * meterInOneKm;

    printf("\n%.2f Kilometers => %.2f Meters\n", kilometers,meters);

    getch();
    return 0;
}
// Main Function End
