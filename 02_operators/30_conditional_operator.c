// // C program to Demonstrate the use of Conditional Operator ( ? : )

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    // // Check Whether A Number is Non-Positive or Negative Using Conditional operator and Even or Odd :-

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    // // Non-Positive or Negative
    num <= 0 ? printf("\n%d is Non-Positive\n", num) : printf("\n%d is Positive\n", num);

    // // Even or Odd
    num % 2 ? printf("\n%d is Odd\n", num) : printf("\n%d is Even\n", num);

    getch();
    return 0;
}
// // Main Function End
