// //  C program to print all Prime numbers under 150

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Main Function Start
int main()
{

    printf("\n>>>>>>>>>> All Prime Numbers Under 50 <<<<<<<<<<<<\n");

    int i;
    printf("2 ");
    for (int num = 3; num <= 50; num++)
    {
        if (num & 1)
        {
            for (i = 2; i <= sqrt(num); i++)
            {
                if (num % i == 0)
                    break;
            }
            if (i > sqrt(num))
                printf("%d ", num);
        }
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
