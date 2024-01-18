// // Write a program to demonstrate the use realloc function in C.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

#define MAX 50

// // Main Function Start
int main()
{
    const int n;
    int *ptr, sum = 0, choice, numOfNewElements, newSize;
    printf("\nHow Many Elements You Want to Enter In Array (MAX %d) => ", MAX);
    scanf("%d", &n);

    // // Invalid Input
    if (n < 1 || n > MAX)
    {
        puts("\n!!! Invalid Input...\n");
        exit(0);
    }

    // // Allocate memory dynamically
    ptr = (int *)malloc(n * sizeof(int));

    if (!ptr)
    {
        puts("\nUnable to Allocate Memory Dynamically...\n");
        exit(0);
    }

    // // Input Elements
    printf("\nEnter %d Elements => ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    // // Display Elements
    printf("\n>>>>>>>>>>>>>>> Elements of Array <<<<<<<<<<<<<\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    // // Display Sum
    printf("\n\nSum of Elements => %d", sum);

    // // Ask to user that he wants to enter more elements
    puts("\n\nDo You Want to Enter More Elements In Existing Array. If Yes, then Press 1 otherwise Press Any Number => ");
    scanf("%d", &choice);

    if (choice != 1)
        exit(0);

    printf("\nHow Many New Elements You Want to Enter (MAX %d) => ", MAX - n);
    scanf("%d", &numOfNewElements);

    // // Invalid Input
    if (numOfNewElements < 1 || numOfNewElements > MAX - n)
    {
        puts("\n!!! Invalid Input...\n");
        exit(0);
    }

    newSize = n + numOfNewElements; // // New Size of Array

    // // Allocate memory dynamically
    ptr = (int *)realloc(ptr, newSize * sizeof(int));

    if (!ptr)
    {
        puts("\nUnable to Allocate Memory Dynamically...\n");
        exit(0);
    }

    // // Input Elements
    printf("\nEnter %d Elements => ", numOfNewElements);
    for (int i = n; i < newSize; i++)
    {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    // // Display Elements
    printf("\n>>>>>>>>>>>>>>> Elements of Array <<<<<<<<<<<<<\n");
    for (int i = 0; i < newSize; i++)
        printf("%d ", ptr[i]);

    // // Display Sum
    printf("\n\nSum of Elements => %d", sum);

    // // Free Dynamically Allocated Memory
    free(ptr);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
