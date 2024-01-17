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
        system("cls");

        // Display Options and get user's choice
        puts(">>>>>>>>>>>>>> WELCOME TO MATHEMATICS MACHINE <<<<<<<<<<<<");
        printf("\n### Maximum %d Accounts Can be Created In This Machine ###", MAX_ROWS);
        printf("\n## There Are %d Accounts Already Created In This Machine ##", totalAccountCreated);
        puts("\n\n# Login to Perform Mathematical Operatons #");
        puts("\n======== You Have Following Options ========");
        puts("Press 0 : Exit");
        puts("Press 1 : Sign-up / Create New Account");
        puts("Press 2 : Login / Sign-in");
        puts("Press 3 : Reset Password");
        puts("Press 4 : Delete Account");
        puts("--------------------------------------------");

        printf("Enter You Choice => "); // Input User Choice
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 0: // Exit
            puts("\nProgram End..\n.");
            exit(0);

        case 1: // Sign-up / Create New Account
        {
            if (totalAccountCreated == MAX_ROWS - 1) // Check if Account Reached to Maximum Limit
            {
                printf("\nSorry... You Cannot Create a New Account, Because the Machine Reached its Maximum Account Limit that is %d\n", MAX_ROWS);
                getch();
                break;
            }

            puts("\n============== SIGN-UP ================");

            // Input username for sign-up
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
                printf("\nEnter Username (MAX CHARACTERS %d) => ", MAX_COLS - 1);
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
                    puts("\n\n!!! Username is Invalid, Try Again...");
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

            // Reached Here Only if username is valid

            // Input Password for sign-up
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
                printf("\n\nEnter Your Choice => ");
                fflush(stdin);
                scanf("%d", &choiceForPass);

                if (choiceForPass != 1 && choiceForPass != 2) // Invalid Choice
                {
                    puts("\nWrong Choice, Plz Select From Given Options. Try Again...");
                    choosedCorrect = 0;
                    getch();
                }

            } while (!choosedCorrect);

            // Terminate When Password is Valid
            do
            {
                isPasswordValid = 1; // Assume Password will be valid
                printf("\nEnter Password (MAX CHARACTERS %d) => ", MAX_COLS - 1);

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
                        if (password[i] == ' ' || password[i] == '\t')
                            isPasswordValid = 0;
                    }
                }

                if (!isPasswordValid) // if Password is Invalid
                {
                    puts("\n\n!!! Password is Invalid, Try Again...");
                    getch();
                }

            } while (!isPasswordValid); // Terminate When Password is Valid

            // Reached Here Only if Both username and password is valid

            // When Both Username and Password Are valid then Create New User
            strcpy(usernames[totalAccountCreated], username);
            strcpy(passwords[totalAccountCreated++], password);

            // Display Accout Created Message
            puts("\n\nYou Have Successfully Created Your Account...");

        } // End of Case-1 (Sign-up / Create New Account)

        break;

        case 2: // Login / Sign-in
        {
            puts("\n============== LOGIN ================");

            // Input Username for Login
            char username[MAX_COLS];
            int isUsernameValid = -1;
            printf("\nEnter Your Username => ");
            fflush(stdin);
            fgets(username, MAX_COLS, stdin);
            username[strcspn(username, "\n")] = '\0';

            // Check username is valid or not
            for (int i = 0; i < totalAccountCreated; i++)
            {
                if (strcmp(usernames[i], username) == 0)
                    isUsernameValid = i;
            }

            if (isUsernameValid == -1) // If username is invalid
            {
                puts("\n!!! Invalid Username, Try Again...");
                puts("Failed to Login...\n");
                getch();
                break;
            }

            // Reached Here Only if username is valid

            // Input Password for Login
            char password[MAX_COLS];
            int choosedCorrect, choiceForPass;

            do // Terminate When user Enter Correct Choice for following
            {
                choosedCorrect = 1;
                printf("\nPress 1 : For Enter Password Hiddenly");
                printf("\nPress 2 : For Enter Password Without Hidden");
                printf("\n\nEnter Your Choice => ");
                fflush(stdin);
                scanf("%d", &choiceForPass);

                if (choiceForPass != 1 && choiceForPass != 2) // Invalid Choice
                {
                    puts("\nWrong Choice, Plz Select From Given Options. Try Again...");
                    choosedCorrect = 0;
                    getch();
                }

            } while (!choosedCorrect);

            printf("\nEnter Your Password (MAX CHARACTERS %d) => ", MAX_COLS - 1);

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

            // Check that Password is valid or not
            if (strcmp(passwords[isUsernameValid], password) != 0)
            {
                puts("\n!!! Invalid Password, Try Again...");
                puts("Failed to Login...\n");
                break;
            }

            // Reached Here Only if Both username and password is valid

            // Successfully Logged in
            printf("\n\nYou Have Successfully Logged In...");

            // Display Options to Perform Mathematics Operations After Login
            while (1)
            {
                system("cls");
                char choice;
                float num1, num2;
                puts("\n>>>>> Choose One of Following Options <<<<<");
                puts("-------------------------");
                puts("Press a : Addition");
                puts("Press b : Subtraction");
                puts("Press c : Multiplication");
                puts("Press d : Division");
                puts("Press e : Exit (Session Expire, You Have to Login Again)");
                puts("-------------------------");
                printf("\nEnter Your Choice => ");
                fflush(stdin);
                scanf("%c", &choice);

                if (choice == 'a' || choice == 'b' || choice == 'c' || choice == 'd')
                {
                    printf("\nEnter Two Numbers => ");
                    scanf("%f%f", &num1, &num2);
                }

                switch (choice)
                {
                case 'a':
                    printf("\n%f + %f => %f", num1, num2, num1 + num2);
                    break;
                case 'b':
                    printf("\n%f - %f => %f", num1, num2, num1 - num2);
                    break;
                case 'c':
                    printf("\n%f x %f => %f", num1, num2, num1 * num2);
                    break;
                case 'd':
                    printf("\n%f / %f => %f", num1, num2, num1 / num2);
                    break;
                case 'e':
                    break;
                default:
                    puts("\n!!! Invalid Choice...");
                }

                if (choice == 'e') // Break loop If user press e
                    break;

            } // End of while block

        } // End of case-2 (Login / Sign-in)

        break;

        case 3: // Reset Password
        {
            puts("\n============== RESET PASSWORD ================");

            // Input Username for Reset Password
            char username[MAX_COLS];
            int isUsernameValid = -1;
            printf("\nEnter Your Username => ");
            fflush(stdin);
            fgets(username, MAX_COLS, stdin);
            username[strcspn(username, "\n")] = '\0';

            // Check username is valid or not
            for (int i = 0; i < totalAccountCreated; i++)
            {
                if (strcmp(usernames[i], username) == 0)
                    isUsernameValid = i;
            }

            if (isUsernameValid == -1) // If username is invalid
            {
                puts("\n!!! Invalid Username, Try Again...");
                puts("Failed to Reset Password...\n");
                break;
            }

            // Reached Here Only if username is valid

            // Input New Password (Reset Password)
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
                printf("\n\nEnter Your Choice => ");
                fflush(stdin);
                scanf("%d", &choiceForPass);

                if (choiceForPass != 1 && choiceForPass != 2) // Invalid Choice
                {
                    puts("\nWrong Choice, Plz Select From Given Options. Try Again...");
                    choosedCorrect = 0;
                    getch();
                }

            } while (!choosedCorrect);

            // Terminate When Password is Valid
            do
            {
                isPasswordValid = 1; // Assume Password will be valid
                printf("\nEnter New Password (MAX CHARACTERS %d) => ", MAX_COLS - 1);

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
                        if (password[i] == ' ' || password[i] == '\t')
                            isPasswordValid = 0;
                    }
                }

                if (!isPasswordValid) // if Password is Invalid
                {
                    puts("\n!!! Password is Invalid, Try Again...");
                    getch();
                }

            } while (!isPasswordValid); // Terminate When Password is Valid

            // Reached Here if Both username and Password is valid

            // Reset Password and Display Reset Password Successfully Message
            strcpy(passwords[isUsernameValid], password);

            puts("\n\nYou Have Successfully Reset Your Account...\n");

        } // End of case-3 (Reset Password)

        break;

        case 4: // Delete Account
        {
            if (totalAccountCreated == 0) // Check if there is any Account
            {
                printf("\nThere is No Account in Machine to Delete...\n");
                break;
            }

            puts("\n============== DELETE ACCOUNT ================");

            // Input Username for Delete Account
            char username[MAX_COLS];
            int isUsernameValid = -1;
            printf("\nEnter Your Username => ");
            fflush(stdin);
            fgets(username, MAX_COLS, stdin);
            username[strcspn(username, "\n")] = '\0';

            // Check username is valid or not
            for (int i = 0; i < totalAccountCreated; i++)
            {
                if (strcmp(usernames[i], username) == 0)
                    isUsernameValid = i;
            }

            if (isUsernameValid == -1) // If username is invalid
            {
                puts("\n!!! Invalid Username, Try Again...");
                puts("Failed to Delete Account...\n");
                getch();
                break;
            }

            // Reached Here Only if username is valid

            // Input Password for Delete Account
            char password[MAX_COLS];
            int isPasswordValid = 1, minLengthOfPassword = 8, choiceForPass, choosedCorrect = 1;

            do // Terminate When user Enter Correct Choice for following
            {
                choosedCorrect = 1;
                printf("\nPress 1 : For Enter Password Hiddenly");
                printf("\nPress 2 : For Enter Password Without Hidden");
                printf("\n\nEnter Your Choice => ");
                fflush(stdin);
                scanf("%d", &choiceForPass);

                if (choiceForPass != 1 && choiceForPass != 2) // Invalid Choice
                {
                    puts("\nWrong Choice, Plz Select From Given Options. Try Again...");
                    choosedCorrect = 0;
                    getch();
                }

            } while (!choosedCorrect);

            printf("\nEnter Your Password (MAX CHARACTERS %d) => ", MAX_COLS - 1);

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

            if (strcmp(passwords[isUsernameValid], password) != 0)
            {
                puts("\n!!! Invalid Password, Try Again...");
                puts("Failed to Delete Account...\n");
                getch();
                break;
            }

            // Reached Here if Both username and Password is valid

            // Delete Account and Display Account Deleted Successfully Message
            if (isUsernameValid == totalAccountCreated - 1)
            {
                strcpy(usernames[totalAccountCreated - 1], "");
                strcpy(passwords[totalAccountCreated - 1], "");
                totalAccountCreated--;
            }
            else
            {
                for (int i = isUsernameValid; i < totalAccountCreated - 1; i++)
                {
                    strcpy(usernames[i], usernames[i + 1]);
                    strcpy(passwords[i], passwords[i + 1]);
                }
            }

            puts("\n\nAccount Deleted Successfully...\n");

        } // End of case-4 (Delete Account)

        break;

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