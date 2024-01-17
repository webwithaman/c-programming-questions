// Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// Main Function Start
int main()
{
    const int ROWS = 10;
    char usernames[][20] = {
        "user123",
        "alpha_89",
        "coolUser",
        "test_user",
        "username42",
        "demo_user",
        "guest123",
        "coderGirl",
        "powerUser",
        "hello_world"};
    char username[MAX_COLS];
    int isUsernameValid = 0;

    // Display List of Words
    printf("\n>>>>>>>>>>>>> List of Username <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(usernames[i]);

    // Read Username from user
    printf("\n>>>>>>>> Enter One of the Usernames, then You Will be Allowed to Calculate Factorial of a Number <<<<<<<<\n");
    printf("\nEnter username (MAX CHARACTERS %d) => ", MAX_COLS - 1);
    fflush(stdin);
    fgets(username, MAX_COLS, stdin);
    username[strcspn(username, "\n")] = '\0';

    // Check that username entered by user is one of the usernames or not
    for (int i = 0; i < ROWS; i++)
    {
        if (strcmp(usernames[i], username) == 0)
        {
            isUsernameValid = 1;
            break;
        }
    }

    if (isUsernameValid) // Username is Valid
    {
        puts("\n>>>>>> Username is Valid, You are Allowed to Calculate Factorial of a Number <<<<<<<");
        int num;
        long long unsigned int fact = 1;
        printf("\nEnter A Number to Calculate Factorial => ");
        scanf("%d", &num);

        for (int i = 2; i <= num; i++)
            fact *= i;

        printf("\nFactorial of %d => %llu", num, fact);
    }
    else
    {
        puts("\n!!! Invalid username, The username Entered by You Does not Match with Any of the List of Usernames...");
    }

    putch('\n');
    getch();
    return 0;
}
// Main Function End
