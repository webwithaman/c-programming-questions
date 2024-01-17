// Write a program to store information of 10 students and display them using structure.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_CHAR_NAME 31
#define MAX_CHAR_STANDARD 11
#define MAX_STUDENT 10

// Define Structure
struct Student
{
    int roll;
    char name[MAX_CHAR_NAME];
    char standard[MAX_CHAR_STANDARD];
};

// Functions Declarations (Prototypes)
void inputStudent(struct Student *);
void displayStudent(struct Student);

// // Main Function Start
int main()
{
    // create variable of structure Student
    struct Student students[MAX_STUDENT];

    // Input Students Data
    printf("\n>>>>>> Enter Data of %d Students <<<<<<<\n", MAX_STUDENT);
    for (int i = 0; i < MAX_STUDENT; i++)
    {
        printf("\n###### Enter Data of Student-%d ######\n", i + 1);
        inputStudent(&students[i]);
    }

    // Display Students Data
    printf("\n>>>>>> Data of %d Students <<<<<<<\n", MAX_STUDENT);
    for (int i = 0; i < MAX_STUDENT; i++)
    {
        printf("\n###### Data of Student-%d ######", i + 1);
        displayStudent(students[i]);
    }

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function to Input Student data
void inputStudent(struct Student *student)
{
    printf("\nEnter Student's Roll Number => ");
    scanf("%d", &student->roll);

    printf("Enter Student's Name (MAX CHARACTERS %d) => ", MAX_CHAR_NAME - 1);
    fflush(stdin);
    fgets(student->name, MAX_CHAR_NAME, stdin);         // Input String
    student->name[strcspn(student->name, "\n")] = '\0'; // Replace '\n' character with '\0'

    printf("Enter Student's Standard (Class) (MAX CHARACTERS %d) => ", MAX_CHAR_STANDARD - 1);
    fflush(stdin);
    fgets(student->standard, MAX_CHAR_NAME, stdin);             // Input String
    student->standard[strcspn(student->standard, "\n")] = '\0'; // Replace '\n' character with '\0'
}

// Function to Display Student data
void displayStudent(struct Student student)
{
    puts("\n=========================================");

    printf("Student's Roll => %d", student.roll);
    printf("\nStudent's Name => %s", student.name);
    printf("\nStudent's Standard => %s", student.standard);

    puts("\n=========================================");
}
