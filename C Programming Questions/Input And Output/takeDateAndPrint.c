// C Program to Take Date In Given Format :-

/*

    Input Format => DD/MM/YYYY  =>  14/02/2023

    Output Format => "Day - DD ,Month - MM ,Year - YYYY"  => "Day - 14 ,Month - 02 ,Year - 2023"

*/


// Header files
#include <stdio.h>
#include <conio.h>
 

// Main Function Start
int main()
{

    int date, month, year;
    printf("\nEnter Date in this Format => DD/MM/YYYY => ");
    scanf("%d/%d/%d", &date, &month, &year);

    printf("Day - %d,Month - %d,Year - %d", date, month, year);

    getch();
    return 0;
}
// Main Function End
