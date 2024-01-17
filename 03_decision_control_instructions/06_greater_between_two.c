// //  C program to Print greater between two numbers.Print one number of both if both are the same

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    float num1, num2;
    printf("\nEnter Two Numbers to Check Greater => ");
    scanf("%f%f", &num1, &num2);

    // // using if-else
    if (num1 > num2)
        printf("\n%f is Greater", num1);
    else
        printf("\n%f is Greater", num2);

    // // using conditional operator
    // printf("\n%f is Greater", num1 > num2 ? num1 : num2);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
