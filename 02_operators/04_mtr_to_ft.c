// C program to convert Meters to Feets

// Header Files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define FT_IN_1_MTR 3.280839

// // Main Function Start
int main()
{
    float ft, mtr;
    printf("\nEnter value in Meters to convert in Feets => ");
    scanf("%f", &mtr);
    ft = mtr * FT_IN_1_MTR;
    printf("\n%.4f Meter = %.4f Feet\n", mtr, ft);

    getch();
    return 0;
}
// // Main Function End
