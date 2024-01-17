// C program to take two numbers as input and print sum of the numbers in following format :-
// 👉 Output => Sum of N and N => N

// Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    float num1, num2, sum;
    printf("\nEnter Two Numbers => ");
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    printf("\nSum of %.2f and %.2f  => %.2f\n", num1, num2, sum);

    getch();
    return 0;
}
// // Main Function End