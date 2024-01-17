// //  C program to check whether a given number is an even number or an odd

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter a number to check whether it is Even or Odd => ");
    scanf("%d", &num);

    // // 1st Approach (using % Modulus opertor)
    if (num % 2)
        printf("\n%d is Odd", num);
    else
        printf("\n%d is Even", num);

    // // 2nd Approach (using & Bitwise AND operator)
    // if (num & 1)
    //     printf("\n%d is Odd", num);
    // else
    //     printf("\n%d is Even", num);

    // // 3rd Approach
    // if (num / 2.0 - num / 2 == 0)
    //     printf("\n%d is Even", num);
    // else
    //     printf("\n%d is Odd", num);

    // // 4th Approach
    // if (num / 2 * 2 == num)
    //     printf("\n%d is Even", num);
    // else
    //     printf("\n%d is Odd", num);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
