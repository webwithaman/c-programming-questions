// C Program to Demonstrate the use of Comma (,) Operator


/* 

  Work of Comma (,) Operator 

  1. A comma operator in C or C++ is a binary operator. It evaluates the first operand & discards the result, evaluates the second operand & returns the value as a result. It has the lowest precedence among all Operators.

  2. A comma as a separator is used to separate multiple variables in a variable declaration, and multiple arguments in a function call. It is the most common use of comma operator in C.

*/


// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int a = 5, b = 10, c = 6; // During the Declaration and Initialization of mutliple variables in a statement, Comma operator works as a seperator.

    int d = (a+5,b-2,c + 10);  // Here the Comma operator will first evaluate the first expression (a+5) and discard the result, then evaluate the second expression (b-2) and discard the result, finally evaluate the third expression (c+10) and return the result which will be stored in d;

    printf("\nValue of d is %d\n",d);

    getch();
    return 0;
}
// Main Function End
