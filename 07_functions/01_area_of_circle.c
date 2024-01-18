// // Write a function to calculate the area of a circle. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
double areaOfCircle(double);

// // Main Function Start
int main()
{
    double radius, area;
    printf("\nEnter Radius of Circle => ");
    scanf("%lf", &radius);
    area = areaOfCircle(radius);
    printf("\nArea of Circle Having Radius %.4f => %.4f", radius, area);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Calculate Area of Circle
double areaOfCircle(double radius)
{
    return 22.0 / 7 * radius * radius;
}
