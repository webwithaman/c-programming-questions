// C Program to Take A Amount in INR and Convert it into USD. Suppose 1 USD = 80.33


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    double INR, USD;
    printf("\nEnter Amount in INR => ");
    scanf("%lf", &INR);

    USD = INR / 80.33;

    printf("\n%.2lf INR => %.2lf USD ", INR, USD);

    getch();
    return 0;
}
// Main Function End
