// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Main Function Start
int main()
{
    int arr[ARRAY_SIZE], sum = 0;

    printf("\nEnter 10 Elements to Calculate Sum => ");

    // Input Elements and Add
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nSum of Entered Elements => %d", sum);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
