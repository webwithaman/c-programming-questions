// Write a program to find the Smallest number stored in an array of size 10. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Main Function Start
int main()
{
    int num[ARRAY_SIZE];

    printf("\nEnter 10 Numbers => ");

    // Input Elements and Search for Smallest
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &num[i]);

    int smallest = num[0];

    // Find Smallest
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (num[i] < smallest)
            smallest = num[i];
    }

    printf("\nSmallest Number => %d", smallest);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
