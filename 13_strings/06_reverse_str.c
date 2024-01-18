// // Write a program to reverse a string.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], temp;
    int length = 0;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // // Input String
    str[strcspn(str, "\n")] = '\0'; // // Replace '\n' character with '\0' in str

    // // First Find Length
    while (str[length])
        length++;

    // // 1st Approach
    int beg = 0, end = length - 1;
    while (beg < end)
    {
        // // Swap str[beg] with str[end]
        temp = str[beg];
        str[beg] = str[end];
        str[end] = temp;
        beg++;
        end--;
    }

    // // 2nd Approach
    // // for (int i = 0; i < length / 2; i++)
    // // {
    // //     // // Swap str[i] with str[length - 1 - i]
    // //     temp = str[i];
    // //     str[i] = str[length - 1 - i];
    // //     str[length - 1 - i] = temp;
    // // }

    printf("\nReverse of Entered String => %s", str);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
