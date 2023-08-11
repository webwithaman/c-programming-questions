// C Program to Check Whether A Character is Vowel or Consonant

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    char ch;
    printf("\nEnter An Alphabet to Know Whether it is A Vowel or Consonant => ");
    scanf("%c", &ch);

    // Using if-else
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
            printf("\n%c is A Vowel", ch);
        else
            printf("\n%c is A Consonant", ch);
    }
    else
        printf("\nEntered Character is Not An Alphabet");


    getch();
    return 0;
}
// Main Function End
