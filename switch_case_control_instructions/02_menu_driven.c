// Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

// Header Files
#include <stdio.h>
#include <conio.h>
#include <time.h>

// Main Function Start
int main()
{
    char choice;
    puts("\n>>>>> Choose One of Following Options <<<<<");
    puts("-------------------------");
    puts("Press a : Addition");
    puts("Press b : Subtraction");
    puts("Press c : Multiplication");
    puts("Press d : Division");
    puts("Press e : Exit");
    puts("-------------------------");
    printf("\nEnter Your Choice => ");
    fflush(stdin);
    scanf("%d", &choice);


    printf("\n");
    getch();
    return 0;
}
// Main Function End
