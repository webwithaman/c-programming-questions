// //  C program to take date as an input in below given format and convert print it in other format :-
// 👉 Input format => DD-MM-YYYY. Example => (18-10-2023)
// 👉 Output format => Day is DD, Month is MM and Year is YYYY. Example => (Date is 18, Month is 10 and Year is 2023)

// Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int DD, MM, YYYY;
    printf("\nEnter Date In This Format (DD-MM-YYYY) => ");
    scanf("%d-%d-%d", &DD, &MM, &YYYY);
    printf("Entered Date Converted In This Format => Day is %d, Month is %d and Year is %d", DD, MM, YYYY);

    getch();
    return 0;
}
// // Main Function End