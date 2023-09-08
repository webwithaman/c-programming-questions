// C Program to Multiply Two Floating Point Numbers


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    float num1, num2, result;
    printf("\nEnter Two Numbers to Product => ");
    scanf("%f%f", &num1, &num2);

    result = num1 * num2;

    printf("\nProduct of %.2f and %.2f => %.2f", num1, num2, result);

    getch();
    return 0;
}
// Main Function End
