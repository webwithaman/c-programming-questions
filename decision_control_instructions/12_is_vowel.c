// C program to take an alphabet from user and check whether the given alphabet is a vowel or a consonant

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    char ch;
    printf("\nEnter an alphabet to check whether tt is vowel or consonant => ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch <= 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
            printf("\n%c is a vowel", ch);
        else
            printf("\n%c is a consonant", ch);
    else
        printf("\nEntered Character is not an Alphabet");

    printf("\n");
    getch();
    return 0;
}