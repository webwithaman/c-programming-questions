// //  C program to take radius of circle and print area of circle in following format :-
// 👉 Output => Area of Circle is A having radius R
// Where A is Area of Circle and R is Radius of Circle.

// Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    float radius, area;
    printf("\nEnter Radius of Circle => ");
    scanf("%f", &radius);
    area = 22.0 / 7 * radius * radius;
    printf("\nArea of Circle is %.2f having Radius %.2f\n", area, radius);

    getch();
    return 0;
}
// // Main Function End