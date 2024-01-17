// //  C program to print a Number without its Last Digit

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);

    printf("\n%d Without last Digit => %d\n", num, num / 10);

    getch();
    return 0;
}
// // Main Function End
