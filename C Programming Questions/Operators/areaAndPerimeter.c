// C Program Find Area And Perimeter of A Rectangle


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    float length, breadth, area, perimeter;
    printf("\nEnter Length => ");
    scanf("%f", &length);

    printf("\nEnter Breadth => ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea of Rectangle => %.2f\nPerimeter of Rectangle => %.2f",area,perimeter);

    getch();
    return 0;
}
// Main Function End
