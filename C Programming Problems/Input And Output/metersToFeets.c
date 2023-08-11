// C Program to Convert Meters to Feets


// Header files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define feetsInOneMeter 3.2808399

// Main Function Start
int main()
{

    float feets,meters;
    printf("\nEnter Lenght In Meters => ");
    scanf("%f",&meters);

    feets = meters * feetsInOneMeter;

    printf("\n%.2f Meters => %.2f Feets\n",meters,feets);

   

    getch();
    return 0;
}
// Main Function End
