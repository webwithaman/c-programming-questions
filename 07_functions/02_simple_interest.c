// // Write a function to calculate simple interest. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
double simpleInterest(double, double, double);

// // Main Function Start
int main()
{
    double principalAmount, rateOfInterest, time, si;
    printf("\nEnter Principal Amount => ");
    scanf("%lf", &principalAmount);
    printf("\nEnter Rate of Interest => ");
    scanf("%lf", &rateOfInterest);
    printf("\nEnter Time In Years => ");
    scanf("%lf", &time);
    si = simpleInterest(principalAmount, rateOfInterest, time);
    printf("\nSimple Interest => %.2lf\n", si);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Calculate Simple Interest
double simpleInterest(double principalAmount, double rateOfInterest, double time)
{
    return principalAmount * rateOfInterest * time / 100;
}
