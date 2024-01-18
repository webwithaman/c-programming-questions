// // C program to Demonstrate the use of Comma Operator (,)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    // // Comma as an operator: It evaluates the first operand and discards the result, then evaluates the second operand and returns the value as a result. For example, int i = (5, 10); assigns 10 to i.
    int a = (4, 6, 8);
    printf("\n a => %d", a);

    // // Comma as a separator: It separates multiple variables in a variable declaration or multiple arguments in a function call. For example, int a = 1, b = 2; declares two variables and void fun(x, y); calls a function with two arguments.
    int num1 = 5, num2 = 10, num3 = 15;

    // // Comma operator in place of a semicolon: It can be used to terminate statements after variable declarations or function calls without using semicolons. For example, int x = 10; printf("x = %d\n", x); is equivalent to int x = 10; printf("x = %d\n", x);.

    getch();
    return 0;
}
// // Main Function End
