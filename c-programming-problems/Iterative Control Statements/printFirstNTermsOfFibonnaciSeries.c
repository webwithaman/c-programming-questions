// C Program to Print First N Terms of Fibonnaci Series

// Header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int n, prev = -1, next = 1, result;
    printf("\nEnter N to Print First N Terms of Fibonnaci Series => ");
    scanf("%d", &n);


    // Handling Wrong or Invalid Input
    if (n < 1)
    {
        printf("\nInvalid Input....\n");
        exit(0);
    }

    printf("\n>>>>>>>>>>>> First %d Terms of Fibonnaci Series Are <<<<<<<<<<<<<\n\n",n);


    // if Terms Starting from 0 1 1 2 3 5 8 .....
    for (int i = 1; i <= n; i++)
    {
        result = prev + next;
        prev = next;
        next = result;
        printf("%d ",result);
    }


    // if Terms Starting from 1 1 2 3 5 8 .....
    // prev = 0;
    // next = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     result = prev + next;
    //     prev = next;
    //     next = result;
    //     printf("%d ",prev);
    // }



    getch();
    return 0;
}
// Main Function End
