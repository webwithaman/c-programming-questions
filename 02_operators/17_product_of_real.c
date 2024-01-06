// C program to Find Product of Two Real Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    float num1, num2, result;
    printf("\nEnter Two Real Numbers to Find Product => ");
    scanf("%f%f", &num1, &num2);
    result = num1 * num2;
    printf("\nProduct of %f and %f => %f", num1, num2, result);

    getch();
    return 0;
}
// Main Function End
