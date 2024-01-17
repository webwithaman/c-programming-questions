// C program calculate Compound Interest

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Main Function Start
int main()
{
    double principalAmount, rateOfInterest, time, totalAmount, compoundInterest, compoundedAfterMonths;
    printf("\nEnter Pricipal Amount => ");
    scanf("%lf", &principalAmount);
    printf("\nEnter Rate of Interest => ");
    scanf("%lf", &rateOfInterest);
    printf("\nEnter Time => ");
    scanf("%lf", &time);
    printf("\nCompounded After Every N Months => ");
    scanf("%lf", &compoundedAfterMonths);

    double n = 12 / compoundedAfterMonths; // Get Compounded Interval (such as Monthly, Quarterly,Half-yearly,Yearly etc.)

    totalAmount = principalAmount * pow((1 + rateOfInterest / (100 * n)), n * time);
    compoundInterest = totalAmount - principalAmount;

    printf("\nCompound Interest => %.2lf", compoundInterest);
    printf("\nTotal Amount => %.2lf", totalAmount);

    getch();
    return 0;
}
// // Main Function End
