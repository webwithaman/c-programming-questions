// // Write a function to swap values of two in variables by calling a function. (TSRN)

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Functions Declarations (Prototypes)
void swapTwoStrs1(char *, char *);
void swapTwoStrs2(char **, char **);

// // Main Function Start
int main()
{
    char str1[ARRAY_SIZE], str2[ARRAY_SIZE];

    printf("\nEnter String-1 (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str1, ARRAY_SIZE, stdin);   // // Input String
    str1[strcspn(str1, "\n")] = '\0'; // // Replace '\n' character with '\0'

    printf("\nEnter String-2 (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str2, ARRAY_SIZE, stdin);   // // Input String
    str2[strcspn(str2, "\n")] = '\0'; // // Replace '\n' character with '\0'

    printf("\n\n>>>>>>>>>>> Before Swapping <<<<<<<<<<<\n");
    printf("str1 => %s\nstr2 => %s\n", str1, str2);

    // // Swap Strings str1 and str2 (1st Approach)
    swapTwoStrs1(str1, str2);

    // // Swap Strings str1 and str2 (2nd Approach)
    // // swapTwoStrs2((char **)&str1, (char **)&str2);

    printf("\n\n>>>>>>>>>>> After Swapping <<<<<<<<<<<\n");
    printf("str1 => %s\nstr2 => %s\n", str1, str2);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function to Swap Two Strings (1st Approach)
void swapTwoStrs1(char *str1, char *str2)
{
    char temp[ARRAY_SIZE];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

// // Function to Swap Two Strings (2nd Approach)
void swapTwoStrs2(char **str1, char **str2)
{
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}