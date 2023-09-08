// C Program to Check Whether Roots of A Quadratic Equation is Real & Distinct, Real & Equal Or Imaginary Roots


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    float a, b, c, discriminant;
    printf("\nEnter the Coefficients of a,b and c => ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // 1st Approach
    if (!a) // True When a == 0
        printf("\nNot A Quadratic Equation");
    else if (discriminant > 0)
        printf("\nRoots Are Real And Distinct");
    else if (discriminant)
        printf("\nRoots Are Imaginary");
    else
        printf("\nRoots Are Real And Equal");


    getch();
    return 0;
}
// Main Function End
