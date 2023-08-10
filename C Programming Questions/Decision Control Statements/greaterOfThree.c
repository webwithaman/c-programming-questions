// C Program to Find Greater Among Three Numbers

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int num1, num2, num3;
    printf("\nEnter Three Numbers to Find Greater => ");
    scanf("%d%d%d", &num1, &num2, &num3);


    // 1st Approach (Using if-else Ladder)
    // if (num1 > num2 && num1 > num3)
    //     printf("\n%d is Greater", num1);
    // else if (num2 > num3)
    //     printf("\n%d is Greater", num2);
    // else
    //     printf("\n%d is Greater", num3);


    // 2nd Approach (Using Nested if-else)
    // if (num1 > num2)
    // {
    //     if (num1 > num3)
    //         printf("\n%d is Greater", num1);
    //     else
    //         printf("\n%d is Greater", num3);
    // }
    // else if (num2 > num3)
    //     printf("\n%d is Greater", num2);
    // else
    //     printf("\n%d is Greater", num3);


    getch();
    return 0;
}
// Main Function End
