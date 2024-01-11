// Create an authentication system that can manage 10 users. It should be menu driven.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

#define cursorforward(x) printf("\033[%dC", (x))

char *getHiddenPassword(char password[])
{

    return password;
}

// Main Function Start
int main()
{
    int i = 0; // Represent Index for password array
    char ch;   // Store character taken from user

    while (1) // Read untill user press enter key
    {
        fflush(stdin); // clear buffer
        ch = getch();  // get character from user

        if (ch == '\r' || ch == '\n') // if user press enter then stop taking input
            break;
        else if (ch == 8 && i > 0) // if user press backspace key
        {
            putch('\b');
            putch(' ');
            putch('\b');
            i--;
        }
        else if (ch >= 32 && ch <= 126) // if character is valid
        {
            putch('*');
            password[i++] = ch;
        }
    }

    password[i] = '\0'; // Terminate password with '\0'

    putch('\n');
    getch();
    return 0;
}
// Main Function End
