// //  C program to find Area and Perimeter of a Rectangle

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    float area, perimeter, l, b;
    printf("\nEnter Lenght and Breadth of A Rectangle => ");
    scanf("%f%f", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("\nArea of Rectangle => %.2f", area);
    printf("\nPerimeter of Rectangle => %.2f", perimeter);

    getch();
    return 0;
}
// // Main Function End
