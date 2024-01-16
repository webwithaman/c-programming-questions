// Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_CHAR_NAME 31
#define MAX_EMP 10

// Define Structure
struct Employee
{
    int id;
    char name[MAX_CHAR_NAME];
    double salary;
};

// Functions Declarations (Prototypes)
void inputEmployee(struct Employee *);
void displayEmployee(struct Employee);
int highestSalaryEmp(struct Employee *, int);

// Main Function Start
int main()
{
    // create variable of structure Employee
    struct Employee emps[MAX_EMP], highestSalEmp;

    // Input Employees Data
    printf("\n>>>>>> Enter Data of %d Employees <<<<<<<\n", MAX_EMP);
    for (int i = 0; i < MAX_EMP; i++)
    {
        printf("\n###### Enter Data of Employee-%d ######\n", i + 1);
        inputEmployee(&emps[i]);
    }

    // Display Employees Data
    printf("\n>>>>>> Data of %d Employees <<<<<<<\n", MAX_EMP);
    for (int i = 0; i < MAX_EMP; i++)
    {
        printf("\n###### Data of Employee-%d ######", i + 1);
        displayEmployee(emps[i]);
    }

    // Find Highest Salary Employee
    int index = highestSalaryEmp(emps, MAX_EMP);
    highestSalEmp = emps[index];

    // Employee with highest salary
    printf("\n>>>>>> Following Employee Has Highest Salary <<<<<<<\n\n");
    displayEmployee(highestSalEmp);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function to Input Employee data
void inputEmployee(struct Employee *emp)
{
    printf("\nEnter Employee's Id => ");
    scanf("%d", &emp->id);

    printf("Enter Employee's Name (MAX CHARACTERS %d) => ", MAX_CHAR_NAME - 1);
    fflush(stdin);
    fgets(emp->name, MAX_CHAR_NAME, stdin);     // Input String
    emp->name[strcspn(emp->name, "\n")] = '\0'; // Replace '\n' character with '\0'

    printf("Enter Employee's Salary => ");
    scanf("%lf", &emp->salary);
}

// Function to Display Employee data
void displayEmployee(struct Employee emp)
{
    puts("\n=========================================");

    printf("Employee's Id => %d", emp.id);
    printf("\nEmployee's Name => %s", emp.name);
    printf("\nEmployee's Salary => %.2lf", emp.salary);

    puts("\n=========================================");
}

// Function to Find Highest Salary Employee
int highestSalaryEmp(struct Employee *empPtr, int size)
{
    int index = 0;

    for (int i = 1; i < size; i++)
    {
        if (empPtr[i].salary > empPtr[index].salary)
            index = i;
    }

    return index;
}
