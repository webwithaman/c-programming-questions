// C Program to Check Whether A Number is Even or Odd Using Bitwise Operator


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);

    if (num & 1)
        printf("\n%d is An Odd Number", num);
    else
        printf("\n%d is An Even Number", num);


    getch();
    return 0;
}
// Main Function End
