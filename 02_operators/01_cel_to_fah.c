// //  C program to convert Celcius to Fahrenheit.

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    float cel, fah;
    printf("\nEnter value in Celcius to convert in Fahrenheit => ");
    scanf("%f", &cel);
    fah = cel * 9 / 5 + 32;
    printf("\n%.2f Celcius = %.2f Fahrenheit\n", cel, fah);

    getch();
    return 0;
}
// // Main Function End
