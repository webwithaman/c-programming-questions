// C Program to Calculate Factorial of A Number

// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int num;
    unsigned long long int factorial = 1;
    printf("\nEnter A Number to Find Factorial => ");
    scanf("%d", &num);

    // Handling Invalid Input
    if (num < 0)
        num = -num;


    // Using while loop
    int i = 2;
    while (i <= num)
        factorial *= i++;


    // Using do while loop
    // int i = 2;
    // do
    // {
    //     factorial *= i++;
    // } while (i <= num);


    // Using for loop
    // for (int i = 2; i <= num; i++)
    //     factorial *= i;


    printf("\nFactorial of %d => %llu\n", num, factorial);

    getch();
    return 0;
}
// Main Function End
