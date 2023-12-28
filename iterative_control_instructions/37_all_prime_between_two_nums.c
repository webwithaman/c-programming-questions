// C program to print all Prime numbers between two given numbers

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int beg, end, i, flag = 1;
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

    printf("\n>>>>>>>>> Prime Numbers Between %d and %d <<<<<<<<<<<<<<<\n", beg, end);

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
            {
                printf("%d ", num);
                flag = 0;
            }
        }
    }

    if (flag)
        printf("\nThere Are No Prime Numbers Between %d and %d", beg, end);

    printf("\n");
    getch();
    return 0;
}