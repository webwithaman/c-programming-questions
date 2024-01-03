// Write a function to calculate simple interest. (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
double simpleInterest(double,double,double);

// Main Function Start
int main()
{
    double principalAmount, rateOfInterest, time, si;
    printf("\ => ");
    scanf("%lf", &radius);
    area = areaOfCircle(radius);
    printf("\nArea of Circle Having Radius %.4f => %.4f", radius, area);

    getch();
    return 0;
}
// Main Function End

// Function Definition
double simpleInterest(double principalAmount, double rateOfInterest, double time)
{
    return principalAmount * rateOfInterest * time / 100;
}
