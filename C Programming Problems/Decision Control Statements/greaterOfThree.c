// C Program to Find Greater Among Three Numbers

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int num1, num2, num3, greater;
    printf("\nEnter Three Numbers to Find Greater => ");
    scanf("%d%d%d", &num1, &num2, &num3);

    // 1st Approach (Using Ternary Operator)
    greater = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // 2nd Approach
    // greater = num1;
    // if (greater < num2)
    //     greater = num2;
    // if (greater < num3)
    //     greater = num3;

    // 3rd Approach (Using if-else Ladder)
    // if (num1 > num2 && num1 > num3)
    //     greater = num1;
    // else if (num2 > num3)
    //     greater = num2;
    // else
    //     greater = num3;

    // 4th Approach (Using Nested if-else)
    // if (num1 > num2)
    // {
    //     if (num1 > num3)
    //         greater = num1;
    //     else
    //         greater = num3;
    // }
    // else
    // {
    //   if (num2 > num3)
    //     greater = num2;
    // else
    //     greater = num3;
    // }

    printf("\n%d is Greater", greater);

    getch();
    return 0;
}
// Main Function End
