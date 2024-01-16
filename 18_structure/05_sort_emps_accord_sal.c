// Write a function to sort employees according to their salaries [ refer structure from question 1]

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
struct Employee *sortEmpsAccordSal(struct Employee *, int);
void swapEmp(struct Employee *, struct Employee *);

// Main Function Start
int main()
{
    // create variable of structure Employee
    struct Employee emps[MAX_EMP], highestSalEmp;

    // Input Employees Data
    printf("\n>>>>>> Enter Employee Data of %d Employees <<<<<<<\n", MAX_EMP);
    for (int i = 0; i < MAX_EMP; i++)
    {
        printf("\n###### Enter Data of Employee-%d ######\n", i + 1);
        inputEmployee(&emps[i]);
    }

    // Display Employees Data Before Sorting
    printf("\n>>>>>> Data of %d Employees Before Sorting <<<<<<<\n", MAX_EMP);
    for (int i = 0; i < MAX_EMP; i++)
    {
        printf("\n###### Data of Employee-%d ######", i + 1);
        displayEmployee(emps[i]);
    }

    // Sort Employees according to their Salarie
    sortEmpsAccordSal(emps, MAX_EMP);

    // Display Employees Data After Sorting
    printf("\n>>>>>> Data of %d Employees After Sorting Accoding to Their Salaries <<<<<<<\n", MAX_EMP);
    for (int i = 0; i < MAX_EMP; i++)
    {
        printf("\n###### Data of Employee-%d ######", i + 1);
        displayEmployee(emps[i]);
    }

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

    printf("Enter Employee Name (MAX CHARACTERS %d) => ", MAX_CHAR_NAME - 1);
    fflush(stdin);
    fgets(emp->name, MAX_CHAR_NAME, stdin);     // Input String
    emp->name[strcspn(emp->name, "\n")] = '\0'; // Replace '\n' character with '\0'

    printf("Enter Employee Salary => ");
    scanf("%lf", &emp->salary);
}

// Function to Display Employee data
void displayEmployee(struct Employee emp)
{
    puts("\n=========================================");

    printf("Employee Id => %d", emp.id);
    printf("\nEmployee Name => %s", emp.name);
    printf("\nEmployee Salary => %.2lf", emp.salary);

    puts("\n=========================================");
}

// Function to Sort Employees according to their Salarie
struct Employee *sortEmpsAccordSal(struct Employee *empPtr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (empPtr[j].salary > empPtr[j + 1].salary)
            {
                swapEmp(&empPtr[j], &empPtr[j + 1]);
            }
        }
    }

    return empPtr;
}

// Function to Swap data of two Employees
void swapEmp(struct Employee *emp1, struct Employee *emp2)
{
    struct Employee temp = *emp1;
    *emp1 = *emp2;
    *emp2 = temp;
}