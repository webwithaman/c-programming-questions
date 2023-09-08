// C Program to Check Whether A Given Alphabet is in Uppercase or in Lowercase


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    char alphabet;
    printf("\nEnter An Alphabet => ");
    scanf("%c", &alphabet);

    if (alphabet > 64 && alphabet < 91)
        printf("\nEntered Alphabet is in Uppercase");
    else if (alphabet > 96 && alphabet < 123)
        printf("\nEntered Alphabet is in Lowercase");
    else
        printf("\nNot An Alphabet");

    getch();
    return 0;
}
// Main Function End
