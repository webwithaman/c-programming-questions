// C program calculate Compound Interest

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start
int main()
{
    float principal, rateOfInterest, time, compoundInterest, compoundedAfterMonths;
    printf("\nEnter Pricipal Amount => ");
    scanf("%f", &principal);
    printf("\nEnter Rate of Interest => ");
    scanf("%f", &rateOfInterest);
    printf("\nEnter Time => ");
    scanf("%f", &time);
    printf("\nCompounded After Every N Months => ");
    scanf("%f", &compoundedAfterMonths);

    float n = 12 / compoundedAfterMonths; // Get Compounded Interval (such as Monthly, Quarterly,Half-yearly,Yearly etc.)

    compoundInterest = principal * pow((1 + rateOfInterest / (100 * n)), n * time) - principal;

    printf("\nCompound Interest => %.2f", compoundInterest);

    getch();
    return 0;
}