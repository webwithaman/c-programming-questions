// C Program to Convert Feets to Meters


// Header files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define feetsInOneMeter 3.2808399

// Main Function Start
int main()
{

    float feets,meters;
    printf("\nEnter Lenght In Feets => ");
    scanf("%f",&feets);

    meters =  feets/feetsInOneMeter;

    printf("\n%.2f Feets => %.2f Meters\n",meters,feets);

   

    getch();
    return 0;
}
// Main Function End
