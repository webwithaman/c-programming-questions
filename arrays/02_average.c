// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Main Function Start
int main()
{
    int num[ARRAY_SIZE], sum = 0;
    float avg;

    printf("\nEnter 10 Numbers to Calculate Average => ");

    // Input Elements and Add
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    // Calculate Average
    avg = sum / ARRAY_SIZE;

    printf("\nSum of Entered Numbers => %d", sum);
    printf("\nAverage of Entered Numbers => %.2f", avg);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
