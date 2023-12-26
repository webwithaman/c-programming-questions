// C program calculate Simple Interest

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    float principal, rateOfInterest, time, simpleInterest;
    printf("Enter Pricipal Amount => ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest => ");
    scanf("%f", &rateOfInterest);
    printf("Enter Time => ");
    scanf("%f", &time);
    simpleInterest = principal * rateOfInterest * time / 100;
    printf("\nSimple Interest => %.2f", simpleInterest);

    getch();
    return 0;
}