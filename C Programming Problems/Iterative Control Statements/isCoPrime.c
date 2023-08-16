// C Program to Check Whether Two Given Numbers Are Co-Prime or Not

// Header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int num1, num2;
    printf("\nEnter Two Numbers to Check Whether the Numbers Are Co-Prime or Not => ");
    scanf("%d%d", &num1, &num2);

    // Handing Wrong or Invalid Inputs
    if (num1 <= 0 || num2 <= 0)
    {
        printf("\nInvalid Input !!! Both Numbers Must be Positive Integers...\n");
        exit(0);
    }


    int min = num1 < num2 ? num1 : num2;

    for (int i = min; i > 0; i -= i == min ? min / 2 : 1)
    {
        if (num1 % i == 0 && num2 % i == 0) // We can also write if( !(num1 % i) && !(num2 $ i) )
        {
            if (i == 1)
                printf("\n%d and %d Are Co-Prime\n", num1, num2);
            else
                printf("\n%d and %d Are Not Co-Prime\n", num1, num2);
            break;
        }
    }


    getch();
    return 0;
}
// Main Function End
