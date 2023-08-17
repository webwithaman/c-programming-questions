// C Program to Convert Fahrenheit to Celcius


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    float celcius,fahrenheit;
    printf("\nEnter Temperature In Fahrenheit => ");
    scanf("%f",&fahrenheit);

    celcius = (fahrenheit - 32) * 5.0/9;

    printf("\n%.2f Fahrenheit => %.2f Celcius\n",fahrenheit,celcius);

    getch();
    return 0;
}
// Main Function End
