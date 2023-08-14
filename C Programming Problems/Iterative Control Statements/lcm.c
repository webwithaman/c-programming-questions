// C Program to Find LCM of Two Numbers

// Header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int num1, num2;
    printf("\nEnter Two Numbers to Find LCM => ");
    scanf("%d%d", &num1, &num2);

    // Handing Wrong or Invalid Inputs
    if (num1 * num2 <= 0)
    {
        printf("\nLCM of the Entered Number Are Not Possible !!! Both Numbers Must be Positive Integers...\n");
        exit(0);
    }

    // 1st Approach
    int max = num1 > num2 ? num1 : num2;

    for (int i = max; i <= num1 * num2; i += max)
    {
        if (i % num1 == 0 && i % num2 == 0) // We can also write if( !(i % num1) && !(i % num2) )
        {
            printf("\nLCM of %d and %d => %d", num1, num2, i);
            break;
        }
    }

    // 2nd Approach (Using Prime Factorisation Method)
    // int lcm = 1;

    // for (int i = 2; num1 * num2 != 1; i++)
    // {
    //     while (num1 % i == 0 || num2 % i == 0)
    //     {
    //         lcm = lcm * i;
    //         num1 = num1 % i == 0 ? num1 / i : num1;
    //         num2 = num2 % i == 0 ? num2 / i : num2;
    //     }
    // }

    // printf("\nLCM => %d", lcm);

    getch();
    return 0;
}
// Main Function End
