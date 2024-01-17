// //  C program to find all roots of a quadratic equation using switch case

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

// // Main Function Start
int main()
{
    float a, b, c, disc, r1, r2, imaginaryPart;
    printf("\nEnter Coefficients a,b and c => ");
    scanf("%f%f%f", &a, &b, &c);

    if (!a)
    {
        printf("\nNot An Quadratic Equation...");
        exit(0);
    }

    disc = b * b - 4 * a * c;

    printf("\nDiscriminant => %f", disc);

    switch (disc > 0)
    {

    case 1:
        printf("\nRoots Are Real And Distinct...");
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("\nRoots Are %.4f and %.4f", r1, r2);
        break;

    case 0:

        switch (disc < 0)
        {
        case 0:
            printf("\nRoots Are Real And Equal...");
            r1 = r2 = -b / (2 * a);
            printf("\nRoots Are %.4f and %.4f", r1, r1);
            break;

        case 1:
            printf("\nRoots Are Imaginary...");
            r1 = -b / (2 * a);
            imaginaryPart = sqrt(-disc) / (2 * a);
            printf("\nRoot Are %.4f + i(%.4f) and %.4f - i(%.4f)", r1, imaginaryPart, r1, imaginaryPart);
        }
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
