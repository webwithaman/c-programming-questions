// C Program to Check Whether Two Numbers Are Same or Not


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num1, num2;
    printf("\nEnter Two Numbers => ");
    scanf("%d%d", &num1, &num2);


    // 1st Approach (Using Conditional Operator)
    num1 == num2 ? printf("\nBoth Numbers Are Same") : printf("\nNumbers Are Not Same");


    // 2nd Approach (Using if-else)
    // if (num1 == num2)
    //     printf("\nBoth Numbers Are Same");
    // else
    //     printf("\nNumbers Are Not Same");


    getch();
    return 0;
}
// Main Function End
