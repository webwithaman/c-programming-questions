// C Program to Calculate Compound Interest

// Header files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start
int main()
{

    float principalAmount, time, rateOfInterest, compoundInterest;

    printf("\nEnter Principal Amount => ");
    scanf("%f", &principalAmount);

    printf("\nEnter Rate of Interest => ");
    scanf("%f", &rateOfInterest);

    printf("\nEnter Time => ");
    scanf("%f", &time);

    compoundInterest = principalAmount * pow(1 + rateOfInterest / 100,time)  - principalAmount;

    printf("\nCompound Interest => %.2f", compoundInterest);

    getch();
    return 0;
}
// Main Function End
