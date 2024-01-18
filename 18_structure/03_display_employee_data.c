// // Write a function to display employee data. [ Refer structure from question 1 ]

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_CHAR_NAME 31

// // Define Structure
struct Employee
{
    int id;
    char name[MAX_CHAR_NAME];
    double salary;
};

// // Functions Declarations (Prototypes)
void inputEmployee(struct Employee *);
void displayEmployee(struct Employee);

// // Main Function Start
int main()
{
    // // create variable of structure Employee
    struct Employee emp1;

    // // Input Employee Data
    puts("\n>>>>>> Enter Employee's Data <<<<<<<");
    inputEmployee(&emp1);

    // // Display Employee Data
    puts("\n>>>>>> Employee Data <<<<<<<");
    displayEmployee(emp1);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function to Input Employee data
void inputEmployee(struct Employee *emp)
{
    printf("\nEnter Employee's Id => ");
    scanf("%d", &emp->id);

    printf("Enter Employee's Name (MAX CHARACTERS %d) => ", MAX_CHAR_NAME - 1);
    fflush(stdin);
    fgets(emp->name, MAX_CHAR_NAME, stdin);     // // Input String
    emp->name[strcspn(emp->name, "\n")] = '\0'; // // Replace '\n' character with '\0'

    printf("Enter Employee's Salary => ");
    scanf("%lf", &emp->salary);
}

// // Function to Display Employee data
void displayEmployee(struct Employee emp)
{
    puts("\n=========================================");

    printf("Employee's Id => %d", emp.id);
    printf("\nEmployee's Name => %s", emp.name);
    printf("\nEmployee's Salary => %.2lf", emp.salary);

    puts("\n=========================================");
}
