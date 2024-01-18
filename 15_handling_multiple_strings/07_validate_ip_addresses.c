// // From the list of IP addresses, check whether all ip addresses are valid.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 16

// // Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many IP Addresses You Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // // Declare 2D Array According to user's input
    char ips[ROWS][MAX_COLS];
    int isValid, isAllValid = 1, countPeriods, num;

    // // Read IP Addresses
    printf("\n>>>>>>>>>>>>> Enter %d IP Addresses <<<<<<<<<<<\n", ROWS);
    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter IP Address-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(ips[i], MAX_COLS, stdin);
        ips[i][strcspn(ips[i], "\n")] = '\0'; // // Replace '\n' character with '\0'
    }

    // // Display All IP Addresses
    printf("\n>>>>>>>>>>>>> List of IP Addresses <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(ips[i]);

    // // Display Invalid IP Addresses
    printf("\n>>>>> Following IP Addresses Are Invalid <<<<<<\n");
    for (int i = 0; i < ROWS; i++)
    {
        isValid = 1;      // // Initially, Assume that IP is  Valid
        countPeriods = 0; // // Counter to Count Periods for Each IP Address

        if (strlen(ips[i]) < 7) // // Minimum Length of a Valid IP Address is 7
            isValid = 0;
        else
        {
            for (int j = 0; ips[i][j]; j++)
            {
                char ch = ips[i][j];

                if ((ch < '0' || ch > '9') && ch != '.') // // If there is other character than Digit (0-9) or (.)
                {
                    isValid = 0;
                    break;
                }
                else if (ch == '.')
                {
                    if (j == 0 || ips[i][j + 1] == '.' || ips[i][j + 1] == '\0') // // if Period is 0 Index or if there are consecutive Periods one after another or if Period is at last index
                    {
                        isValid = 0;
                        break;
                    }
                    countPeriods++;
                }
            }

            if (countPeriods != 3) // // if there are no valid number of periods
                isValid = 0;

            num = 0;

            for (int j = 0; ips[i][j]; j++)
            {
                if (ips[i][j] != '.')
                {
                    if (j == 0 && ips[i][j] == '0' && ips[i][j + 1] != '.') // // If First Octet value has leading 0
                    {
                        isValid = 0;
                        break;
                    }
                    num = num * 10 + (ips[i][j] - 48); // // Convert Each char digit in number

                    if (ips[i][j + 1] == '\0' && num > 255) // // If last Octet has value Greater than 255
                    {
                        isValid = 0;
                        break;
                    }
                }
                else if (num > 255) // // if Any Octet Value is Greater than 255
                {
                    isValid = 0;
                    break;
                }
                else
                {
                    num = 0;
                    if (ips[i][j + 1] == '0' && ips[i][j + 2] != '.' && ips[i][j + 2] != '\0') // // If Octet value has leading 0
                    {
                        isValid = 0;
                        break;
                    }
                }
            }
        }

        if (!isValid) // // True, then IP is not valid
        {
            puts(ips[i]);
            isAllValid = 0;
        }
    }

    if (isAllValid) // // If All IP Addresses are Valid
        puts("\nAll the IP Addresses Are Valid...");

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
