// C program  to take a Character as an input and print its ASCII Code

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    char c;
    printf("\nEnter Any Character to Find its ASCII Code => ");
    scanf("%c", &c);
    printf("\nASCII Code of %c => %d", c, c);

    getch();
    return 0;
}