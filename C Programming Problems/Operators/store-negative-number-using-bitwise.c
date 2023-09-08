// C Program to Store a Negative Number in a Variable using Bitwise operator (Store -8).

/*

   Work of Bitwise Complement (~) Operator

   The bitwise complement operator is a unary operator (works on only one operand). It takes one number and inverts all bits of it. When bitwise operator is applied on bits then, all the 1’s become 0’s and vice versa. The operator for the bitwise complement is ~ (Tilde).

*/ 

// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int a = ~7;  // After Evaluation of ~7, It will Return -8 Which Will be Stored in a

    printf("%d",a); // Output will be -8
   
    getch();
    return 0;
}
// Main Function End
