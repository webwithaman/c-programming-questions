// C Program to Find Greater Between Two Numbers. Print Any Same If Both Are Same


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num1, num2;
    printf("\nEnter Two Numbers to Find Greater => ");
    scanf("%d%d", &num1, &num2);


    // 1st Approach (Using if-else Ladder)
    if (num1 > num2)
        printf("\n%d is Greater Than %d", num1, num2);
    else if (num1 < num2)
        printf("\n%d is Greater Than %d", num2, num1);
    else
        printf("\nBoth Numbers Are Same");


    // 2nd Approach (Using Conditional)
    // num1 > num2 ? (printf("\n%d is Greater Than %d", num1, num2)) : (num1 < num2 ? printf("\n%d is Greater Than %d", num2, num1) : printf("\nBoth Numbers Are Same"));


    getch();
    return 0;
}
// Main Function End
