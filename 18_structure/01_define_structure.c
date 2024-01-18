// // Define a structure Employee with member variables id, name, salary.

// // Header Files
#include <stdio.h>
#include <conio.h>

#define MAX_CHAR_NAME 31

// // Define Structure
struct Employee
{
    int id;
    char name[MAX_CHAR_NAME];
    double salary;
};

// // Main Function Start
int main()
{
    // // create variable of structure Employee
    struct Employee emp1;

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
