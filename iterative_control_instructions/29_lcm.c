// C program to calculate LCM of two numbers

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int num1, num2;
    printf("\nEnter Two Numbers to Find LCM => ");
    scanf("%d%d", &num1, &num2);

    num1 = fabs(num1);
    num2 = fabs(num2);
    int max = num1 > num2 ? num1 : num2;
    int min = num1 < num2 ? num1 : num2;

    // // 1st Approach
    int lcm;
    for (int i = max; i <= num1 * num2; i += max)
    {
        if (i % min == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("\nLCM => %d", lcm);

    // // 2nd Approach
    // int lcm;
    // for (int j = max; j <= num1 * num2; j += max)
    // {
    //     if (j % num1 == 0 && j % num2 == 0)
    //     {
    //         lcm=j;
    //         break;
    //     }
    // }
    // printf("\nLCM => %d", lcm);

    // // 3rd Approach
    // int hcf,lcm;
    // if (max % min)
    // {
    //     if (max == min + 1 || max == min + 2)
    //         hcf = 1;
    //     else
    //         for (int k = min / 2; k; k--)
    //         {
    //             if (num1 % k == 0 && num2 % k == 0)
    //             {
    //                 hcf = k;
    //                 break;
    //             }
    //         }
    // }
    // else
    //     hcf = min;
    // lcm = num*num2/hcf;
    // printf("\nHCF => %d", hcf);

    // // 4th Approach
    // int remainder, hcf, lcm;
    // do
    // {
    //     remainder = num1 % num2;
    //     num1 = num2;
    //     num2 = remainder;
    // } while (remainder);

    // hcf = num1;
    // lcm = max * min / hcf;
    // printf("\nLCM => %d", lcm);

    printf("\n");
    getch();
    return 0;
}