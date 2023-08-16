// C Program to Print All Prime Numbers Under 100

// Header files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start
int main()
{

    printf("\n>>>>>>>>>>> All Prime Numbers Under 100 <<<<<<<<<<<<\n");

    int sqroot, isPrime = 1;

    for (int i = 2; i < 100; i++)
    {
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
