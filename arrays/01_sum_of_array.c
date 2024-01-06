// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define SIZE 10;

// Main Function Start
int main()
{
    int num[SIZE], sum = 0;

    printf("\nEnter 10 Numbers to Calculate Sum => ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }


    putch('\n');
    getch();
    return 0;
}
// Main Function End
