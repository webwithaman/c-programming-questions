// C Program to Find Nth Term of Fibonnaci Series

// Header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int n, prev = -1, next = 1, result, termAtN;
    printf("\nEnter N to Find Nth Term of Fibonnaci Series => ");
    scanf("%d", &n);


    // Handling Wrong or Invalid Input
    if (n < 1)
    {
        printf("\nThere is No Term of Fibonnaci Series At Your Entered Number !!!\nPlease Enter Valid Number....\n");
        exit(0);
    }


    // if Terms Starting from 0 1 1 2 3 5 8 .....
    for (int i = 1; i <= n; i++)
    {
        result = prev + next;
        prev = next;
        next = result;
    }
    termAtN = result;


    // if Terms Starting from 1 1 2 3 5 8 .....
    // prev = 0;
    // next = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     result = prev + next;
    //     prev = next;
    //     next = result;
    // }
    // termAtN = prev;


    printf("\nTerm %d of Fibonnaci Series => %d\n", n, termAtN);

    getch();
    return 0;
}
// Main Function End
