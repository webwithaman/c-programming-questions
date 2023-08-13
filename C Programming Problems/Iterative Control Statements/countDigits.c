// C Program to Count Digits In A Given Number

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Count Digits In It => ");
    scanf("%d", &num);

    int numberOfDigits = num ? 0 : 1;

    // Shortest Way
    numberOfDigits=1;
    while((num/=10) && numberOfDigits++);

    // Using while loop
    // while (num){
    //     numberOfDigits++;
    //     num/=10;
    // }

    // Using do while loop
    // numberOfDigits = 0;
    // do
    // {
    //     numberOfDigits++;
    // } while (num /= 10);

    // Using for loop
    // for (; num; numberOfDigits++)
    //     num /= 10;

    printf("\nThere Are %d Digits In Entered Number\n", numberOfDigits);

    getch();
    return 0;
}
// Main Function End
