// Find out the largest and smallest element from an array that is created using dynamic memory allocation in C.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

#define MAX 50

// // Main Function Start
int main()
{
    const int n;
    int *ptr, smallest, largest;
    printf("\nHow Many Elements You Want to Enter (MAX %d) => ", MAX);
    scanf("%d", &n);

    // Invalid Input
    if (n < 1 || n > MAX)
    {
        puts("\n!!! Invalid Input...\n");
        exit(0);
    }

    // Allocate memory dynamically
    ptr = (int *)malloc(n * sizeof(int));

    if (!ptr)
    {
        puts("\nUnable to Allocate Memory Dynamically...\n");
        exit(0);
    }

    // Input Numbers
    printf("\nEnter %d Numbers => ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    smallest = largest = ptr[0];

    // Find Largest and Smallest Element
    for (int i = 1; i < n; i++)
    {
        if (ptr[i] > largest)
            largest = ptr[i];

        if (ptr[i] < smallest)
            smallest = ptr[i];
    }

    printf("\nSmallest Element => %d\nLargest Element => %d", smallest, largest);

    // Free Dynamically Allocated Memory
    free(ptr);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
