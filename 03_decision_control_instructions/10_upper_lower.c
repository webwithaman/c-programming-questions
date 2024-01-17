//  C program to input an alphabet from user and check whether the given alphabet is in uppercase or in lowercase

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    char ch;
    printf("\nEnter An Alphabet => ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("\n%c is an Alphabet in Uppercase", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("\n%c is an Alphabet in Lowercase", ch);
    else
        printf("\nNot an Alphabet");

    printf("\n");
    getch();
    return 0;
}
// Main Function End
