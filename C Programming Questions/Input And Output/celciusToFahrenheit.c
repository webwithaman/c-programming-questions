// C Program to Convert Celcius to Fahrenheit


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    float celcius,fahrenheit;
    printf("\nEnter Temperature In Celcius => ");
    scanf("%f",&celcius);

    fahrenheit = 9 * celcius / 5 + 32;

    printf("\n%.2f Celcius => %.2f Fahrenheit\n",celcius,fahrenheit);

    getch();
    return 0;
}
// Main Function End
