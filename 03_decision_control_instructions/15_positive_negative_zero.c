// // C program to check whether a given number is positive, negative or zero

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter a number => ");
    scanf("%d", &num);

    if (num > 0)
        printf("\n%d is Positive", num);
    else if (num)
        printf("\n%d is Negative", num);
    else
        printf("\nEntered Number is 0");

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
