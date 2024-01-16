// Write a program to ask the user to that how many numbers he would like to enter then create an array dynamically to accommodate the numbers. Now take the input from the user and display the average of numbers.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

#define MAX 50

// Main Function Start
int main()
{
    const int n;
    int *ptr, sum;
    float avg;
    printf("\nHow Many Numbers You Want to Enter (MAX %d) => ", MAX);
    scanf("%d", &n);

    // Invalid Input
    if (n < 1 || n > MAX)
    {
        puts("\n!!! Invalid Input...\n");
        exit(0);
    }

    // Allocate memory dynamically
    *ptr = (int *)calloc(n, sizeof(int));

    // Input Numbers
    puts("\nEnter %d Numbers => ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    // Find Average
    avg = (float)sum / n;

    // Display Sum and Average
    printf("\nSum of Numbers => %d\nAverage of Numbers => %.2f", sum, avg);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
