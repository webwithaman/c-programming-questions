// C program calculate Simple Interest

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    double principalAmount, rateOfInterest, time, totalAmount, simpleInterest;
    printf("Enter Pricipal Amount => ");
    scanf("%lf", &principalAmount);
    printf("Enter Rate of Interest => ");
    scanf("%lf", &rateOfInterest);
    printf("Enter Time In Years => ");
    scanf("%lf", &time);
    simpleInterest = principalAmount * rateOfInterest * time / 100;
    totalAmount = principalAmount + simpleInterest;
    printf("\nSimple Interest => %.2lf", simpleInterest);
    printf("\nTotal Amount  => %.2lf", totalAmount);

    getch();
    return 0;
}
// Main Function End
