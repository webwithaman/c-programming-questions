// Write a program in C to read n number of values in an array and reverse the array    then display the elements. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    const int ARRAY_SIZE;
    printf("\nHow Many Elements You Want to Enter => ");
    scanf("%d", &ARRAY_SIZE);

    if (ARRAY_SIZE < 1)
    {
        printf("\n!!! Invalid Input, Plz Correctly Specify Number of Elements...");
        exit(0);
    }

    // Declare Array of Variable size
    int arr[ARRAY_SIZE];

    // Input Elements
    printf("\nEnter %d Elements => ", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &arr[i]);

    // Print Elements In Normal Order
    puts("\n>>>>>>>> Elements In Normal Order <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", arr[i]);

    // // 1st Approach
    int beg = 0, end = ARRAY_SIZE - 1, temp;
    while (beg < end)
    {
        temp = arr[beg];
        arr[beg] = arr[end];
        arr[end] = temp;
        beg++;
        end--;
    }

    // // 2nd Approach
    // int temp;
    // for (int i = 0; i < ARRAY_SIZE / 2; i++)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[ARRAY_SIZE - 1 - i];
    //     arr[ARRAY_SIZE - 1 - i] = temp;
    // }

    // Print Elements In Reverse Order
    puts("\n\n>>>>>>>> Elements In Reverse Order <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", arr[i]);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
