// From the list of IP addresses, check whether all ip addresses are valid.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ROWS 10
#define MAX_COLS 16

// Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many IP Addresses You Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // Declare 2D Array According to user's input
    char ips[ROWS][MAX_COLS];
    int isValid = 1, isAllValid = 1, countPeriods = 0;

    // Read IP Addresses
    printf("\n>>>>>>>>>>>>> Enter %d IP Addresses <<<<<<<<<<<\n", ROWS);
    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter IP Address-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(ips[i], MAX_COLS, stdin);
        ips[i][strcspn(ips[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }

    // Display All IP Addresses
    printf("\n>>>>>>>>>>>>> List of IP Addresses <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(ips[i]);

    // Display IP Addresses Which Don't have '@' in it
    printf("\n>>>>> Following IP Addresses Are Invalid <<<<<<\n");
    for (int i = 0; i < ROWS; i++)
    {
        if (strlen(ips[i]) < 7)
            isValid = 0;
        else
        {
            for (int j = 0; ips[i][j]; j++)
            {
                if ((ips[i][j] < '0' || ips[i][j] > '9') && ips[i][j] != '.')
                {
                    isValid = 0;
                    break;
                }

                if (ips[i][j] == '.')
                {
                    countPeriods++;
                    if (j == 0 || ips[i][j - 1] == '.' || countPeriods > 3)
                    {
                        isValid = 0;
                        break;
                    }
                    else
                    {
                        int index = j - 1, k = 0;
                        float num = 0;
                        int digit;
                        while (index >= 0 && ips[i][index] != '.')
                        {
                            digit = ips[i][index] - 48;
                            num = pow(10, j - index - 1) * digit + num;
                            index--;
                        }

                        if ((ips[i][index + 1] == '0' && ips[i][index + 2] != '.') || num > 255)
                        {
                            isValid = 0;
                            break;
                        }
                    }
                }
            }
        }

        if (!isValid)
        { // IP is Invalid
            puts(ips[i]);
            isAllValid = 0;
        }
    }

    if (isAllValid) // If All IP Addresses are Valid
        puts("\nAll the IP Addresses Are Valid...");

    putch('\n');
    getch();
    return 0;
}
// Main Function End
