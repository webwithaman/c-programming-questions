// //  C program to check whether a given number is divisible by 7 or divisible by 3

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter a number to check whether a given number is divisible by 7 or divisible by 3 => ");
    scanf("%d", &num);

    // // 1st Approach
    if (num % 7 == 0 || num % 3 == 0)
        printf("\n%d is divisible by 7 or divisible by 3");
    else
        printf("\n%d is not divisible by 7 or divisible by 3");

    // // 2nd Approach
    if (num % 3 && num % 2)
        printf("\n%d is not divisible by 7 anor divisible by 3");
    else
        printf("\n%d is divisible by 7 or divisible by 3");

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
