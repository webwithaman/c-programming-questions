//  C program to take amount in INR and convert it into USD, Where 1 USD = 83.19

// Header Files
#include <stdio.h>
#include <conio.h>

// Define Macros
#define INR_IN_1_USD 83.19

// Main Function Start
int main()
{
    float INR, USD;
    printf("\nEnter Amount in INR => ");
    scanf("%f", &INR);
    USD = INR / INR_IN_1_USD;

    printf("\n%.f INR = %.2f USD", INR, USD);

    getch();
    return 0;
}
// Main Function End
