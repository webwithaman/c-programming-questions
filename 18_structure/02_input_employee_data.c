// Write a function to take input employee data from the user. [ Refer structure from question 1 ]

// Header Files
#include <stdio.h>
#include <conio.h>

#define MAX_CHAR_NAME 31

// Define Structure
struct Employee
{
    int id;
    char name[MAX_CHAR_NAME];
    double salary;
};

// Main Function Start
int main()
{
    // create variable of structure Employee
    struct Employee emp1;

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function to Input Employee data
void inputEmployee(struct Employee *emp)
{
    printf("\nEnter Employee Id => ");
    scanf("%d", &emp->id);
    printf("\nEnter Employee Name => ");

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str
}
