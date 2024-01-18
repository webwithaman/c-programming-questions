// // C program to check whether a given number is an even number or an odd

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter a number to check whether it is Even or Odd => ");
    scanf("%d", &num);

    // // 1st Approach (using & Bitwise AND)
    if (num & 1)
        printf("\n%d is Odd", num);
    else
        printf("\n%d is Even", num);

    // // 2nd Approach
    // // if (num / 2.0 - num / 2 == 0)
    // //    printf("\n%d is Even", num);
    // // else
    // //    printf("\n%d is Odd", num);

    // // 3rd Approach
    // // if (num / 2 * 2 == num)
    // //    printf("\n%d is Even", num);
    // // else
    // //    printf("\n%d is Odd", num);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
