//  Write a program to sort (ascending order) elements of an array of size 10. Take array  values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Main Function Start
int main()
{
    int arr[ARRAY_SIZE];

    printf("\nEnter 10 Elements => ");

    // Input Elements
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &arr[i]);

    // Print Elements
    puts("\n>>>>>>>> Elements Before Sorting <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", arr[i]);

    // // Sorting using Selection Sort
    for (int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        for (int j = i + 1; j < ARRAY_SIZE; j++)
        {
            if (arr[i] > arr[j]) // true, then swap
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // // Sorting using Bubble Sort
    // for (int i = 0; i < ARRAY_SIZE - 1; i++)
    // {
    //     for (int j = 0; j < ARRAY_SIZE - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1]) // true, then swap
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }

    // Print Elements
    puts("\n\n>>>>>>>> Elements After Sorting <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", arr[i]);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
