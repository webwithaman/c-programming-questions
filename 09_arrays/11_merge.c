// // Write a program in C to merge two sorted arrays and store result in another array.

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    // // Declare Arrays
    int arr1[] = {3, 10, 45, 68, 234}, arr2[] = {4, 5, 9, 224, 501, 555, 1000};
    int size1 = sizeof(arr1) / sizeof(arr1[0]), size2 = sizeof(arr2) / sizeof(arr2[0]), size3 = size1 + size2;
    int merged[size3];

    // // Merge arrays
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // // append rest of the elements if available
    while (i < size1)
    {
        merged[k++] = arr1[i++];
    }

    // // append rest of the elements if available
    while (j < size2)
    {
        merged[k++] = arr2[j++];
    }

    // // Print Elements of Array-1
    puts("\n\n>>>>>>>> Elements of Array-1 <<<<<<<<<");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr1[i]);

    // // Print Elements of Array-1
    puts("\n\n>>>>>>>> Elements of Array-2 <<<<<<<<<");
    for (int i = 0; i < size2; i++)
        printf("%d ", arr2[i]);

    // // Print Elements of Merged Array
    puts("\n\n>>>>>>>> Elements of Merged Array <<<<<<<<<");
    for (int i = 0; i < size3; i++)
        printf("%d ", merged[i]);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
