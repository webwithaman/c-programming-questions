// C Program to Find HCF of Two Numbers

// Header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int num1, num2;
    printf("\nEnter Two Numbers to Find HCF => ");
    scanf("%d%d", &num1, &num2);

    // Handing Wrong or Invalid Inputs
    if (num1 <= 0 || num2 <= 0)
    {
        printf("\nHCF of the Entered Number Are Not Possible !!! Both Numbers Must be Positive Integers...\n");
        exit(0);
    }

    int min = num1 < num2 ? num1 : num2;

    // 1st Approach
    for (int i = min; i > 0; i -= i == min ? min / 2 : 1)
    {
        if (num1 % i == 0 && num2 % i == 0) // We can also write if( !(num1 % i) && !(num2 $ i) )
        {
            printf("\nHCF of %d and %d => %d\n", num1, num2, i);
            break;
        }
    }

    // 2nd Approach (Using Long Division)
    // int divisor = min, dividend = num1 + num2 - divisor, remainder = dividend % divisor;

    // while (remainder)
    // {
    //     dividend = divisor;
    //     divisor = remainder;
    //     remainder = dividend % divisor;
    // }

    // printf("\nHCF of %d and %d => %d\n", num1, num2, divisor);

    // 3rd Approach (Using LCM)
    // int max = num1 > num2 ? num1 : num2;

    // for (int i = max; i <= num1 * num2; i += max)
    // {
    //     if (i % num1 == 0 && i % num2 == 0) // We can also write if( !(i % num1) && !(i % num2) )
    //     {
    //         printf("\nHCF of %d and %d => %d\n", num1, num2, num1*num2/i);
    //         break;
    //     }
    // }

    // 4th Approach (Using Prime Factorization)
    // int hcf = 1;

    // for (int i = 2; num1 * num2 != 1; i++)
    // {
    //     while (num1 % i == 0 || num2 % i == 0)
    //     {
    //        if(num1%i == 0 && num2%i==0)
    //          hcf*=i;
    //         num1 = num1 % i == 0 ? num1 / i : num1;
    //         num2 = num2 % i == 0 ? num2 / i : num2;
    //     }
    // }

    // printf("\nHCF => %d", hcf);

    getch();
    return 0;
}
// Main Function End
