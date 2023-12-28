// C program to print all Prime numbers between two given numbers

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int beg, end, i = -1;
    printf("\nEnter Two Numbers to Print All Prime Numbers Between Them => ");
    scanf("%d%d", &beg, &end);

    //  Handling Invalid Input
    if (beg < 0 || end < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    if (beg > end)
        beg = (beg + end) - (end = beg);

    for (int num = beg; num <= end; num++)
    {
        if (num & 1 && num != 1 || num == 2)
        {
            for (i = 2; i < sqrt(num); i++)
            {
                if (num % i == 0)
                    break;
            }
            if (i > sqrt(num))
                printf("\n%d ", num);
        }
    }

    if (i == -1)
        printf("\nThere Are No Prime Numbers Between Entered Numbers");

    printf("\n");
    getch();
    return 0;
}