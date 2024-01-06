// C program to print all Prime numbers between two given numbers

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int beg, end, i, primeNumFound = 0;
    printf("\nEnter Two Numbers to Print All Prime Numbers Between Them => ");
    scanf("%d%d", &beg, &end);

    if (beg > end)
        beg = (beg + end) - (end = beg);

    printf("\n>>>>>>>>> Prime Numbers Between %d and %d <<<<<<<<<<<<<<<\n", beg, end);

    while (beg <= end)
    {
        if (beg < 2)
        {
            beg++;
            continue;
        }

        for (i = 2; i <= sqrt(beg); i++)
        {
            if (beg % i == 0)
                break;
        }

        if (i > sqrt(beg))
        {
            printf("%d ", beg);
            primeNumFound = 1;
        }

        beg++;
    }

    if (!primeNumFound)
        printf("\nThere Are No Prime Numbers Between Entered Numbers...");

    printf("\n");
    getch();
    return 0;
}
// Main Function End
