// C Program to Print All Prime Numbers Between Two Given Numbers

// Header files
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int start, end;
    printf("\nEnter Two Numbers to Print All Prime Numbers Between Them => ");
    scanf("%d%d", &start, &end);

    // Handling Invalid or wrong Input
    if (start > end)
        end = (start + end) - (start = end);

    if (start < 2 && end < 2)
    {
        printf("\nThere Are No Prime Numbers Between %d and %d", start, end);
        exit(0);
    }

    printf("\n>>>>>>>>>>> All Prime Numbers Between %d And %d <<<<<<<<<<<<\n", start, end);

    int sqroot, isPrime = start < 2 ? 0 : 1; // if isPrime == 1 then, It is Assumed that the Number is Prime else Not Prime

    for (int i = start; i <= end; i++)
    {

        if (i < 0 || i == 1)
            continue;

        sqroot = sqrt(i);

        for (int j = 2; j <= sqroot; j++)
        {
            if (i % j == 0)
            { // we can also write this if(!(i % j))
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);

        isPrime = 1;
    }

    getch();
    return 0;
}
// Main Function End
