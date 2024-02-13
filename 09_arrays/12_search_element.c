// // Write a program in C to search an element in given array using linear search.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{
    const int ARRAY_SIZE;
    int found = 0, search;
    printf("\nHow Many Elements You Want to Enter => ");
    scanf("%d", &ARRAY_SIZE);

    if (ARRAY_SIZE < 1)
    {
        printf("\n!!! Invalid Input, Plz Correctly Specify Number of Elements...");
        exit(0);
    }

    // // Declare Array of Variable size
    int arr[ARRAY_SIZE];

    // // Input Elements
    printf("\nEnter %d Elements => ", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &arr[i]);

    // // Print Elements
    puts("\n>>>>>>>> Elements of Array <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", arr[i]);

    // // Get Element to be Searched
    printf("\n\nEnter An Element to Search In Array => ");
    scanf("%d", &search);

    // // Search Element Using Linear Search
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (arr[i] == search)
            found = 1;
    }

    if (found)
        printf("\nYes, %d is Present in Array", search);
    else
        printf("\nNo, %d is Not Present in Array", search);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
