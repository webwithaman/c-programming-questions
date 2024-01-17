// C program to check whether a given number is divisible by 5 or not

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter a number to check whether it is divisible by 5 or not => ");
    scanf("%d", &num);

    if (num % 5)
        printf("\n%d is Not Divisible by 5", num);
    else
        printf("\n%d is Divisible by 5", num);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
