// C program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character

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
    else if (ch >= '0' && ch <= '9')
        printf("\n%c is a Digit", ch);
    else
        printf("\n%c Entered character is a Special Character", ch);

    printf("\n");
    getch();
    return 0;
}
// Main Function End
