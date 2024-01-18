// //  C program to convert Feets to Meters

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Define Macros
#define FT_IN_1_MTR 3.280839

// // Main Function Start
int main()
{
    float ft, mtr;
    printf("\nEnter value in Feets to convert in Meters => ");
    scanf("%f", &ft);
    mtr = ft / FT_IN_1_MTR;
    printf("\n%.4f Feet = %.4f Meter\n", ft, mtr);

    getch();
    return 0;
}
// // Main Function End
