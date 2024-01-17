// C program which takes the length of the sides of a triangle as an input.Display whether the triangle is valid or not

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    float l1, l2, l3;
    printf("\nEnter Length of Three Sides of Triangle => ");
    scanf("%f%f%f", &l1, &l2, &l3);

    if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)
        printf("\nEntered Lengths Are Valid For A Triangle");
    else
        printf("\nEntered Lengths Are Not Valid For A Triangle");

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
