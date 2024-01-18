// // Write a program to calculate the sum of n numbers entered by the user using malloc and free.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

#define MAX 50

// // Main Function Start
int main()
{
    const int n;
    int *ptr, sum = 0;
    printf("\nHow Many Numbers You Want to Enter (MAX %d) => ", MAX);
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

    // // Input Numbers
    printf("\nEnter %d Numbers => ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    // // Display Sum and Average
    printf("\nSum of Numbers => %d", sum);

    // // Free Dynamically Allocated Memory
    free(ptr);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
