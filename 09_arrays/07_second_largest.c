// Write a program to find the Second largest number stored in an array of size 10. Take array values from the user.

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

    int largest = arr[0], secondLargest = arr[1];

    // Set largest and secondLargest accordingly
    if (secondLargest > largest)
    {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    // Find Second Largest
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
            secondLargest = arr[i];
    }

    printf("\nSecond Largest Number => %d", secondLargest);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
