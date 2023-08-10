// C Program to Find Sum of Two Numbers


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    float num1, num2,result;
    printf("\nEnter Two Numbers to Add => ");
    scanf("%f%f", &num1, &num2);

    result = num1 + num2;

    printf("\nSum of %f and %f => %f\n", num1, num2, result);

    getch();
    return 0;
}
// Main Function End
