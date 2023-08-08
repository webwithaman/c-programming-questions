// C Program to Take Time In Given Format :-

/*

    Input Format => HH:MM:SS  =>  06:15:55

    Output Format => "HH Hour MM Minute And SS Second" => "06 Hour 15 Minute And 55 Second"
    
*/


// Header files
#include <stdio.h>
#include <conio.h>
 

// Main Function Start
int main()
{

    int hour,minute,second;
    printf("\nEnter Time in this Format => HH:MM:SS => ");
    scanf("%d:%d:%d", &hour, &minute, &second);

    printf("%d Hour %d Minute And %d Second\n", hour,minute,second);

    getch();
    return 0;
}
// Main Function End
