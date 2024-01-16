// Write a function to take input employee data from the user. [ Refer structure from question 1 ]

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_CHAR_NAME 31

// Define Structure
struct Employee
{
    int id;
    char name[MAX_CHAR_NAME];
    double salary;
};

// Functions Declarations (Prototypes)
void inputEmployee(struct Employee *);

// Main Function Start
int main()
{
    // create variable of structure Employee
    struct Employee emp1;

    // Input Employee Data
    puts("\n>>>>>> Enter Employee's Data <<<<<<<");
    inputEmployee(&emp1);

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

    printf("\nEnter Employee Name (MAX CHARACTERS %d) => ", MAX_CHAR_NAME - 1);
    fflush(stdin);
    fgets(emp->name, MAX_CHAR_NAME, stdin);     // Input String
    emp->name[strcspn(emp->name, "\n")] = '\0'; // Replace '\n' character with '\0'

    printf("\nEnter Employee Salary => ");
    scanf("%lf", &emp->salary);
}
