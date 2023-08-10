// C Program to Check Whether A Given Character is An Alphabet in Uppercase, An Alphabet in Lowercase, A Digit or A Special Symbol


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    char ch;
    printf("\nEnter A Character => ");
    scanf("%c", &ch);


    if (ch >= 'A' && ch <= 'Z')
        printf("\n%c is An Alphabet in Uppercase", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("\n%c is An Alphabet in Lowercase", ch);
    else if (ch >= '0' && ch <= '9')
        printf("\n%c is A Digit", ch);
    else
        printf("\n%c is A Special Symbol", ch);


    getch();
    return 0;
}
// Main Function End
