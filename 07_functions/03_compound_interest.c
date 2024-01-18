// // Write a function to calculate Compound interest. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Function Declaration (Prototype)
double compoundInterest(double, double, double, double);

// // Main Function Start
int main()
{
    double principalAmount, rateOfInterest, time, totalAmount, ci, compoundedAfterMonths;
    printf("\nEnter Pricipal Amount => ");
    scanf("%lf", &principalAmount);
    printf("\nEnter Rate of Interest => ");
    scanf("%lf", &rateOfInterest);
    printf("\nEnter Time In Years => ");
    scanf("%lf", &time);
    printf("\nCompounded After Every N Months => ");
    scanf("%lf", &compoundedAfterMonths);
    ci = compoundInterest(principalAmount, rateOfInterest, time, compoundedAfterMonths);
    printf("\nCompound Interest => %.2lf", ci);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Calculate Compound Interest
double compoundInterest(double principalAmount, double rateOfInterest, double time, double compoundedAfterMonths)
{
    double n = 12 / compoundedAfterMonths; // // Get Compounded Interval (such as Monthly, Quarterly,Half-yearly,Yearly etc.)

    return principalAmount * pow((1 + rateOfInterest / (100 * n)), n * time) - principalAmount;
}
