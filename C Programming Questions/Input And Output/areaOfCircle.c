// C Program to Find Area of Circle. Take Radius as Input and Print Output


// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    float radius, area;
    printf("\nEnter Radius of Circle => ");
    scanf("%f", &radius); // scanf() Function is used to Take

    area = 22.0 / 7 * radius * radius;

    printf("\nArea of Circle having %.2f => %.2f\n", radius, area);

    getch();
    return 0;
}
// Main Function End
