// //  C program to take time as an input in below given format and convert print it in other format :-
// // 👉 Input format => HH:MM:SS. Example => (06:22:45)
// // 👉 Output format => HH Hour, MM Minute and SS Second. Example => (06 Hour 22 Minute and 45 Second)

// // Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int HH, MM, SS;
    printf("\nEnter Time In This Format (HH:MM:SS) => ");
    scanf("%d:%d:%d", &HH, &MM, &SS);
    printf("Entered Time Converted In This Format =>  %d Hour, %d Minute and %d Second", HH, MM, SS);

    getch();
    return 0;
}
// // Main Function End