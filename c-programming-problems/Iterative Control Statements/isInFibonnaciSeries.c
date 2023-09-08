// C Program to Find Whether A Given Number is In Fibonnaci Series

// Header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int num, prev = -1, next = 1, result, endTerm;
    printf("\nEnter A Number to Find Whether It Exists In Fibonnaci Series or Not => ");
    scanf("%d", &num);

    result = num - 1;

    // if Terms Starting from 0 1 1 2 3 5 8 .....
    while (result < num)
    {
        result = prev + next;
        prev = next;
        next = result;
    }

    // if Terms Starting from 1 1 2 3 5 8 .....
    // prev = 0;
    // next = 1;
    // while (result < num)
    // {
    //     result = prev + next;
    //     prev = next;
    //     next = result;
    // }

    
    endTerm = result;

    if (endTerm == num)
        printf("\nYes, %d Exists In Fibonnaci Series", num);
    else
        printf("\nNo, %d Does not Exists In Fibonnaci Series", num);

    getch();
    return 0;
}
// Main Function End
