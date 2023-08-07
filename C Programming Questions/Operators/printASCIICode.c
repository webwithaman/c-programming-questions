// C Program to Take A Character As an Input And Print Its ASCII Code


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    char character;
    printf("\nEnter A Character => ");
    scanf("%c", &character);

    printf("\nASCII Code of %c => %d", character, character);

    getch();
    return 0;
}
// Main Function End
