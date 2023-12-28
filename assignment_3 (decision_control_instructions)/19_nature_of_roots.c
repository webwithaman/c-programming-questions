// C program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

// Header Files
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

    printf("\n");
    getch();
    return 0;
}