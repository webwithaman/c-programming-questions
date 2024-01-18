// // Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Student having elements roll, name, chem_marks, math_marks, phy_marks, total_scored_marks and percentage and then display the percentage of each student.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHAR_NAME 31
#define MAX_CHAR_STANDARD 11
#define SUB_OUT_OF_MARKS 100
#define NUM_OF_SUBS 3
#define TOTAL_OUT_OF_MARKS SUB_OUT_OF_MARKS *NUM_OF_SUBS
#define MAX_STUDENTS 50

// // Define Structure
struct Student
{
    int roll;
    char name[MAX_CHAR_NAME];
    float chem_marks;
    float math_marks;
    float phy_marks;
    float total_scored_marks;
    float percentage;
};

// // Functions Declarations (Prototypes)
void inputStudent(struct Student *);
void displayStudent(struct Student);

// // Main Function Start
int main()
{
    const int NUM__OF_STUDENTS;

    printf("\nEnter Number of Students (MAX STUDENTS %d) => ", MAX_STUDENTS);
    scanf("%d", &NUM__OF_STUDENTS);

    // // Validate Number of Students
    if (NUM__OF_STUDENTS < 1 || NUM__OF_STUDENTS > MAX_STUDENTS)
    {
        puts("\n!!! Invalid Number of Students...\n");
        exit(0);
    }

    // // create variable of structure Student of variable length
    struct Student students[NUM__OF_STUDENTS];

    // // Input Students Data
    printf("\n>>>>>> Enter Data of %d Students <<<<<<<\n", NUM__OF_STUDENTS);
    for (int i = 0; i < NUM__OF_STUDENTS; i++)
    {
        printf("\n###### Enter Data of Student-%d ######\n", i + 1);
        inputStudent(&students[i]);
    }

    // // Display Students Data
    printf("\n>>>>>> Data of %d Students <<<<<<<\n", NUM__OF_STUDENTS);
    for (int i = 0; i < NUM__OF_STUDENTS; i++)
    {
        printf("\n###### Data of Student-%d ######", i + 1);
        displayStudent(students[i]);
    }

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function to Input Student data
void inputStudent(struct Student *student)
{
    printf("\nEnter Student's Roll Number => ");
    scanf("%d", &student->roll);

    printf("Enter Student's Name (MAX CHARACTERS %d) => ", MAX_CHAR_NAME - 1);
    fflush(stdin);
    fgets(student->name, MAX_CHAR_NAME, stdin);         // // Input String
    student->name[strcspn(student->name, "\n")] = '\0'; // // Replace '\n' character with '\0'

    printf("Enter Student's Marks in Chemistry Out of %d => ", SUB_OUT_OF_MARKS);
    scanf("%f", &student->chem_marks);

    // // Validate Marks
    if (student->chem_marks < 0 || student->chem_marks > SUB_OUT_OF_MARKS)
    {
        puts("\n!!! Invalid Marks...\n");
        exit(0);
    }

    printf("Enter Student's Marks in Mathematics Out of %d => ", SUB_OUT_OF_MARKS);
    scanf("%f", &student->math_marks);

    // // Validate Marks
    if (student->math_marks < 0 || student->math_marks > SUB_OUT_OF_MARKS)
    {
        puts("\n!!! Invalid Marks...\n");
        exit(0);
    }

    printf("Enter Student's Marks in Physics Out of %d => ", SUB_OUT_OF_MARKS);
    scanf("%f", &student->phy_marks);

    // // Validate Marks
    if (student->phy_marks < 0 || student->phy_marks > SUB_OUT_OF_MARKS)
    {
        puts("\n!!! Invalid Marks...\n");
        exit(0);
    }

    // // Calculate Total Scored Marks
    student->total_scored_marks = student->chem_marks + student->math_marks + student->phy_marks;

    // // Calculate Percentage
    student->percentage = student->total_scored_marks / (TOTAL_OUT_OF_MARKS) * 100;
}

// // Function to Display Student data
void displayStudent(struct Student student)
{
    puts("\n=========================================");

    printf("Student's Roll => %d", student.roll);
    printf("\nStudent's Name => %s", student.name);
    printf("\nStudent's Marks in Chemistry => %.2f", student.chem_marks);
    printf("\nStudent's Marks in Mathematics => %.2f", student.math_marks);
    printf("\nStudent's Marks in Physics => %.2f", student.phy_marks);
    printf("\nStudent's Scored Marks  => %.2f/%d", student.total_scored_marks, TOTAL_OUT_OF_MARKS);
    printf("\nStudent's Percentage => %.2f", student.percentage);

    puts("\n=========================================");
}
