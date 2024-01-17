// Write a program in C to copy the elements of one array into another array.Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{
    const int ARRAY_SIZE;
    printf("\nHow Many Elements You Want to Enter In Array-1 => ");
    scanf("%d", &ARRAY_SIZE);

    if (ARRAY_SIZE < 1)
    {
        printf("\n!!! Invalid Input, Plz Correctly Specify Number of Elements...");
        exit(0);
    }

    // Declare Array of Variable size
    int array_1[ARRAY_SIZE];
    int array_2[ARRAY_SIZE];

    // Input Elements
    printf("\nEnter %d Elements => ", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &array_1[i]);

    // Print Elements of Array-2
    puts("\n>>>>>>>> Elements of Array-1 <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", array_1[i]);

    // Copy Elements of array_1 in array_2
    for (int i = 0; i < ARRAY_SIZE; i++)
        array_2[i] = array_1[i];

    // Print Elements of Array-2
    puts("\n\n>>>>>>>> Copied Elements In Array-2 <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", array_2[i]);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
