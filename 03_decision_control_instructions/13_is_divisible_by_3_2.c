//  C program to check whether a given number is divisible by 3 and divisible by 2

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int num;
    printf("\nEnter a number to check whether a given number is divisible by 3 and divisible by 2 => ");
    scanf("%d", &num);

    // 1st Approach
    if (num % 3 == 0 && num % 2 == 0)
        printf("\n%d is divisible by 3 and divisible by 2");
    else
        printf("\n%d is not divisible by 3 and divisible by 2");

    // 2nd Approach
    // if (num % 3 || num % 2)
    //     printf("\n%d is not divisible by 3 and divisible by 2");
    // else
    //     printf("\n%d is divisible by 3 and divisible by 2");

    printf("\n");
    getch();
    return 0;
}
// Main Function End
