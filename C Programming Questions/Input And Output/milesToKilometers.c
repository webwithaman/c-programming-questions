// C Program to Convert Miles to Km (Kilometers)


// Header files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define  kmInOneMile 1.609344;
 
// Main Function Start
int main()
{

    float miles, kilometers;

    printf("\nEnter Distance In Miles => ");
    scanf("%f", &miles);

    kilometers = miles * kmInOneMile;

    printf("\n%.2f Miles => %.2f Kilometers\n", miles, kilometers);

    getch();
    return 0;
}
// Main Function End
