// C program to find next Prime number of a given number

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int n;
    printf("\nEnter A Number to Find Next Prime Number => ");
    scanf("%d", &n);

    //  Handling Invalid Input
    if (n < 0)
    {
        printf("!!! Invalid Input .....");
        exit(0);
    }

    int num = n + 1, i, flag;
    while (1)
    {
        flag = 1;
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag && num != 1)
        {
            printf("\nNext Prime Number => %d", num);
            break;
        }
        num++;
    }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
