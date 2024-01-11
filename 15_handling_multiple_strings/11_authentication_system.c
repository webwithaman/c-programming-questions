// Create an authentication system that can manage 10 users. It should be menu driven. Do not use Structure and Union

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

    char usernames[MAX_ROWS][MAX_COLS], passwords[MAX_ROWS][MAX_COLS];
    int userChoice, totalAccountCreated = 0;

    while (1)
    {

        // Clear console
        sys("cls");

        // Display Options and get user's choice
        puts(">>>>>> WELCOME TO MATHEMATICS MACHINE <<<<<<");
        puts("\n======== You Have Following Options ========");
        puts("Press 0 : Exit");
        puts("Press 1 : Sign-up");
        puts("Press 2 : Login/Sign-in");
        puts("Press 3 : Forget Password");
        pust("--------------------------------------------");

        printf("Enter You Choice => "); // Input User Choice
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 0: // Exit
            puts("\nProgram End...");
            exit(0);

        case 1: // Sign-up
        {
            puts("\n============== SIGN-UP ================");

            // Input username
            char username[MAX_COLS];
            int isUsernameValid, minLengthOfUsername = 6;

            puts("\n------ Instructions For Username ------");
            printf("\nMinimum Length For Username is %d", minLengthOfUsername);
            printf("\nMaximum Length For Username is %d", MAX_COLS - 1);
            printf("\nYou Cannot Use Spaces In Username");
            printf("\nYou Can Use (A-Z), (a-z), (0-9) and Underscore (_)");
            printf("\nYou Cannot Use Any Special Symbol Except Underscore");
            puts("\n---------------------------------------");

            // Terminate When Username is Valid
            do
            {
                isUsernameValid = 1; // Assume username will be valid
                printf("Enter Username (MAX CHARACTERS %d) => ", MAX_COLS - 1);
                fflush(stdin);
                fgets(username, MAX_COLS, stdin);
                username[strcspn(username, "\n")] = '\0';

                // Validate Username
                if (strlen(username) < minLengthOfUsername)
                    isUsernameValid = 0;
                else
                {
                    for (int i = 0; username[i]; i++)
                    {
                        if ((username[i] < '0' || username[i] > '9') && (username[i] < 'A' || username[i] > 'Z') && (username[i] < 'a' || username[i] > 'z') && username[i] != '_')
                            isUsernameValid = 0;
                    }
                }

                if (!isUsernameValid) // True, means username is invalid
                {
                    puts("\n!!! Username is Invalid, Try Again...");
                    getch();
                }
                else
                {
                    // Check if username is Already Taken
                    for (int i = 0; i < totalAccountCreated; i++)
                    {
                        if (strcmp(usernames[i], username) == 0)
                        {
                            puts("\n!!! This Username is No Available, Try Again with Different Username...");
                            isUsernameValid = 0;
                            getch();
                        }
                    }
                }

            } while (!isUsernameValid); // Terminate When Username is Valid

            // Input Password
            char password[MAX_COLS];
            int isPasswordValid = 1, minLengthOfPassword = 8, choiceForPass, choosedCorrect = 1;

            puts("\n------ Instructions For Password ------");
            printf("\nMinimum Length For Password is %d", minLengthOfPassword);
            printf("\nMaximum Length For Username is %d", MAX_COLS - 1);
            printf("\nYou Cannot Use Spaces In Username");
            puts("\n---------------------------------------");

            do // Terminate When user Enter Correct Choice for following
            {
                choosedCorrect = 1;
                printf("\nPress 1 : For Enter Password Hiddenly");
                printf("\nPress 2 : For Enter Password Without Hidden");
                printf("\nEnter Your Choice => ");
                scanf("%d", &choiceForPass);

                if (choiceForPass != 1 && choiceForPass != 2) // Invalid Choice
                {
                    printf("\nWrong Choice, Plz Select From Given Options. Try Again...");
                    choosedCorrect = 0;
                    getch();
                }

            } while (!choosedCorrect);

            // Terminate When Password is Valid
            do
            {
                isPasswordValid = 1; // Assume Password will be valid
                printf("Enter Password (MAX CHARACTERS %d) => ", MAX_COLS - 1);

                if (choiceForPass == 1) // get password hiddenly
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

                        if (i == MAX_COLS - 2) // Password Reached At Max length
                            break;
                    }

                    password[i] = '\0'; // Terminate password with '\0'
                }
                else
                {
                    fflush(stdin);
                    fgets(password, MAX_COLS, stdin);
                    password[strcspn(password, "\n")] = '\0';
                }

                // Validate Password
                if (strlen(password) < minLengthOfPassword)
                    isPasswordValid = 0;
                else
                {
                    for (int i = 0; password[i]; i++)
                    {
                        if (password[i] == ' ' || password[i] == '\t' || password == '\v')
                            isPasswordValid = 0;
                    }
                }

                if (!isPasswordValid) // if Password is Invalid
                {
                    puts("\n!!! Password is Invalid, Try Again...");
                    getch();
                }

            } while (!isPasswordValid); // Terminate When Password is Valid

            // When Both Username and Password Are valid then Create New User
            strcpy(username[totalAccountCreated], username);
            strcpy(passwords[totalAccountCreated], password);

        } // End of Case-1 (Sign-up)

        default:
            puts("\n!!! Invalid Option, Plz Choose One of the Given Options...");
        } // End of switch block

        getch();
    } // End of while block

    putch('\n');
    getch();
    return 0;
}
// Main Function End
