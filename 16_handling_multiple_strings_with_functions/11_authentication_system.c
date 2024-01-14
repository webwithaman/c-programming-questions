// Create an authentication system that can manage 10 users. It should be menu driven. Do not use Structure and Union. Use user-defined Functions to Perform these Tasks.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// Functions Declarations (Prototypes)
int compareStrings(char[], char[]);
char *copyString(char[], char[]);
int showOptsAndGetChoice();
int signup();
int login();
int resetPassword();
int deleteAccount();
void instructsForUsername();
void instructsForPassword();
char *getUsername(char[]);
int isValidUsername(char[]);
int isUserExists(char[]);
char *getPassword(char[]);
int isValidPassword(char[]);
char *getPasswordHiddenly(char[], int);
void showOperationsAfterLoggedIn();

// Global Variables
char usernames[MAX_ROWS][MAX_COLS],
    passwords[MAX_ROWS][MAX_COLS];
int totalAccountCreated = 0;

// Main Function Start
int main()
{

    while (1)
    {
        switch (showOptsAndGetChoice())
        {
        case 0:
            puts("\nProgram End..\n.");
            exit(0);

        case 1:
        {
            if (!signup()) // True means Failed to Signin
                break;

            puts("\n\nYou Have Successfully Created Your Account...");
        }
        break;

        case 2:
        {

            if (!login()) // True means Failed to login
                break;

            printf("\n\nYou Have Successfully Logged In...");

            // Display Options to Perform Mathematics Operations After Login
            showOperationsAfterLoggedIn();
        }

        break;

        case 3:
        {
            if (!resetPassword()) // True means Failed to reset password
                break;

            puts("\n\nYou Have Successfully Reset Your Account...\n");
        }

        break;

        case 4:
        {
            if (!deleteAccount()) // True means Failed to Delete Account
                break;

            puts("\n\nAccount Deleted Successfully...\n");
        }

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

// Function Definitions

// Function to show Options and get user's choice
int showOptsAndGetChoice()
{
    int userChoice;

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

    return userChoice;
}

// Function for Sign-up or Create New Account
int signup()
{
    if (totalAccountCreated == MAX_ROWS - 1) // Check if Account Reached to Maximum Limit
    {
        printf("\nSorry... You Cannot Create a New Account, Because the Machine Reached its Maximum Account Limit that is %d\n", MAX_ROWS);
        return 0; // Failed to Sign-up
    }

    puts("\n============== SIGN-UP ================");

    // Input username for sign-up
    char username[MAX_COLS];
    int isUsernameValid;

    instructsForUsername(); // show instructions for username

    // Terminate When Username is Valid
    do
    {
        getUsername(username);                       // get username
        isUsernameValid = isValidUsername(username); // Validate Username

        if (!isUsernameValid) // True, means username is invalid
        {
            puts("\n\n!!! Username is Invalid, Try Again...");
            getch();
        }
        else
        {
            // Check if username is Already Taken
            isUsernameValid = isUserExists(username);
            if (isUsernameValid != -1)
            {
                puts("\n!!! This Username is No Available, Try Again with Different Username...");
                isUsernameValid = 0;
                getch();
            }
        }

    } while (!isUsernameValid); // Terminate When Username is Valid

    // Reached Here Only if username is valid

    // Input Password for sign-up
    char password[MAX_COLS];
    int isPasswordValid = 1, minLengthOfPassword = 8, choiceForPass, choosedCorrect = 1;

    instructsForPassword(); // show instructions for  password

    // Terminate When Password is Valid
    do
    {
        getPassword(password); // get password

        // Validate Password
        isPasswordValid = isValidPassword(password);

        if (!isPasswordValid) // if Password is Invalid
        {
            puts("\n\n!!! Password is Invalid, Try Again...");
            getch();
        }

    } while (!isPasswordValid); // Terminate When Password is Valid

    // Reached Here Only if Both username and password is valid

    // When Both Username and Password Are valid then Create New User
    copyString(usernames[totalAccountCreated], username);
    copyString(passwords[totalAccountCreated++], password);

    return 1; // Successfully Account Created
}

// Function to Check Whether a Given String an Alphanumeric String or Not
int compareStrings(char str1[], char str2[])
{
    for (int i = 0; str1[i] || str2[i]; i++)
    {
        if (str1[i] > str2[i])
            return str1[i] - str2[i];
        else if (str1[i] < str2[i])
            return str1[i] - str2[i];
    }

    return 0; // Strings are equal
}

// Functtion to Show Instructions for username
void instructsForUsername()
{
    int minLengthOfUsername = 6;
    puts("\n------ Instructions For Username ------");
    printf("\nMinimum Length For Username is %d", minLengthOfUsername);
    printf("\nMaximum Length For Username is %d", MAX_COLS - 1);
    printf("\nYou Cannot Use Spaces In Username");
    printf("\nYou Can Use (A-Z), (a-z), (0-9) and Underscore (_)");
    printf("\nYou Cannot Use Any Special Symbol Except Underscore");
    puts("\n---------------------------------------");
}

// Function to Get Username
char *getUsername(char username[])
{
    printf("\nEnter Username (MAX CHARACTERS %d) => ", MAX_COLS - 1);
    fflush(stdin);
    fgets(username, MAX_COLS, stdin);
    username[strcspn(username, "\n")] = '\0';

    return username;
}

// Function to Validate Username
int isValidUsername(char username[])
{
    int minLengthOfUsername = 6;

    // Validate Username
    if (strlen(username) < minLengthOfUsername)
        return 0; // username is invalid
    else
    {
        for (int i = 0; username[i]; i++)
        {
            if ((username[i] < '0' || username[i] > '9') && (username[i] < 'A' || username[i] > 'Z') && (username[i] < 'a' || username[i] > 'z') && username[i] != '_')
                return 0; // username is invalid
        }
    }

    return 1; // username is valid
}

// Function to check that user exists or not
int isUserExists(char username[])
{
    for (int i = 0; i < totalAccountCreated; i++)
    {
        if (compareStrings(usernames[i], username) == 0)
        {
            return i; // user not exists
        }
    }

    return -1; // user not exists
}

// Function to Validate Password
int isValidPassword(char password[])
{
    int minLengthOfPassword = 8;

    if (strlen(password) < minLengthOfPassword)
        return 0; // password is invalid
    else
    {
        for (int i = 0; password[i]; i++)
        {
            if (password[i] == ' ' || password[i] == '\t')
                return 0; // password is invalid
        }
    }

    return 1; // password is invalid
}

// Functtion to Show Instructions for password
void instructsForPassword()
{
    int minLengthOfPassword = 8;

    puts("\n------ Instructions For Password ------");
    printf("\nMinimum Length For Password is %d", minLengthOfPassword);
    printf("\nMaximum Length For Username is %d", MAX_COLS - 1);
    printf("\nYou Cannot Use Spaces In Username");
    puts("\n---------------------------------------");
}

// Functtion to get password
char *getPassword(char password[])
{
    int choiceForPass, choosedCorrect = 1;

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

    printf("\nEnter Password (MAX CHARACTERS %d) => ", MAX_COLS - 1);

    if (choiceForPass == 1) // get password hiddenly
        getPasswordHiddenly(password, MAX_COLS - 1);
    else
    {
        fflush(stdin);
        fgets(password, MAX_COLS, stdin);
        password[strcspn(password, "\n")] = '\0';
    }

    return password;
}

// Function to Get Password Hiddenly
char *getPasswordHiddenly(char password[], int maxLength)
{
    char ch;
    int i = 0; // for index of password[]

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

        if (i == maxLength - 1) // Password Reached At Max length
            break;
    }

    password[i] = '\0'; // Terminate password with '\0'

    return password;
}

// Function to Copy One String into Another
char *copyString(char des[], char src[])
{
    // Copy str into copy
    int i = 0;
    for (i = 0; src[i]; i++)
        des[i] = src[i];

    des[i] = '\0';

    return des;
}

// Function for Login
int login()
{
    puts("\n============== LOGIN ================");

    // Input Username for Login
    char username[MAX_COLS];
    int isUsernameValid = -1;

    getUsername(username); // get username

    // Check user exists or not
    isUsernameValid = isUserExists(username);

    if (isUsernameValid == -1) // If username not exists
    {
        puts("\n!!! Invalid Username, Try Again...");
        puts("Failed to Login...\n");
        return 0; // Failed to Login
    }

    // Reached Here Only if username is valid

    // Input Password for Login
    char password[MAX_COLS];

    getPassword(password); // get password

    // Check that Password is valid or not
    if (compareStrings(passwords[isUsernameValid], password) != 0)
    {
        puts("\n!!! Invalid Password, Try Again...");
        puts("Failed to Login...\n");
        return 0; // Failed to Login
    }

    return 1; //  Successfully Logged In
}

// Function to Perform Operations after logged in
void showOperationsAfterLoggedIn()
{
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
}

// Function to Reset Password
int resetPassword()
{
    puts("\n============== RESET PASSWORD ================");

    // Input Username for Reset Password
    char username[MAX_COLS];
    int isUsernameValid = -1;

    getUsername(username); // get username

    isUsernameValid = isUserExists(username); // is user exists

    if (isUsernameValid == -1) // If username is invalid
    {
        puts("\n!!! Invalid Username, Try Again...");
        puts("Failed to Reset Password...\n");
        return 0; // Failed to Reset Password
    }

    // Reached Here Only if username is valid

    instructsForPassword(); // Instructions for password

    puts("\n>>>>>> Enter New Password <<<<<<<\n");

    // Input New Password (Reset Password)
    char password[MAX_COLS];
    int isPasswordValid;

    do
    {
        getPassword(password); // get Password

        // Validate Password
        isPasswordValid = isValidPassword(password);

        if (!isPasswordValid) // if Password is Invalid
        {
            puts("\n!!! Password is Invalid, Try Again...");
            getch();
        }

    } while (!isPasswordValid); // Terminate When Password is Valid

    // Reached Here if Both username and Password is valid

    // Reset Password and Display Reset Password Successfully Message
    copyString(passwords[isUsernameValid], password);

    return 1; // Successfully Reset Password
}

// Function to Delete Account
int deleteAccount()
{
    if (totalAccountCreated == 0) // Check if there is any Account
    {
        printf("\nThere is No Account in Machine to Delete...\n");
        return 0; // No Account to Delete
    }

    puts("\n============== DELETE ACCOUNT ================");

    // Input Username for Delete Account
    char username[MAX_COLS];
    int isUsernameValid = -1;

    getUsername(username); // get username

    isUsernameValid = isUserExists(username); // is user exists

    if (isUsernameValid == -1) // If user not exists
    {
        puts("\n!!! Invalid Username, Try Again...");
        puts("Failed to Delete Account...\n");
        return 0; // Failed to Delete Account
    }

    // Reached Here Only if username is valid

    // Input Password for Delete Account
    char password[MAX_COLS];
    int isPasswordValid;

    getPassword(password); // get password

    if (compareStrings(passwords[isUsernameValid], password) != 0)
    {
        puts("\n!!! Invalid Password, Try Again...");
        puts("Failed to Delete Account...\n");
        return 0; // Failed to Delete Account
    }

    // Reached Here if Both username and Password is valid

    // Delete Account and Display Account Deleted Successfully Message
    if (isUsernameValid == totalAccountCreated - 1)
    {
        copyString(usernames[totalAccountCreated - 1], "");
        copyString(passwords[totalAccountCreated - 1], "");
        totalAccountCreated--;
    }
    else
    {
        for (int i = isUsernameValid; i < totalAccountCreated - 1; i++)
        {
            copyString(usernames[i], usernames[i + 1]);
            copyString(passwords[i], passwords[i + 1]);
        }
    }

    return 1; //  Account Deleted Successfully
}