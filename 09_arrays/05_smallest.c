// Write a program to find the Smallest number stored in an array of size 10. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Main Function Start
int main()
{
    int arr[ARRAY_SIZE];

    printf("\nEnter 10 Numbers => ");

    // Input Elements
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &arr[i]);

    int smallest = arr[0];

    // Find Smallest
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("\nSmallest Number => %d", smallest);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
