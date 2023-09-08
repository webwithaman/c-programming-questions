// C Program to Print Next Prime Number Than You Enter

// Header files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Print Next Prime Number => ");
    scanf("%d", &num);

    int sqroot, isPrime = num < 2 ? 0 : 1; // if isPrime == 1 then, It is Assumed that the Number is Prime else Not Prime

    for (int i = num + 1; 1; i++)
    {
        if (i < 0 || i == 1)
            continue;

        sqroot = sqrt(i);

        for (int j = 2; j <= sqroot; j++)
        {
            if (i % j == 0) // we can also write this if(!(i % j))
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("\nNext Prime Number than %d => %d ", num, i);
            break;
        }
        isPrime = 1;
    }

    getch();
    return 0;
}
// Main Function End
