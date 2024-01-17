// //  C program to check whether two given numbers are co-prime numbers or not

// Co Prime Numbers are a pair of numbers with just one factor in common, which is 1

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Main Function Start
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
    // int remainder;
    // do
    // {
    //     remainder = num1 % num2;
    //     num1 = num2;
    //     num2 = remainder;
    // } while (remainder);

    // if (num1 == 1)
    //     printf("\n%d and %d Are Co-Prime", max, min);
    //   else
    //         printf("\n%d and %d Are Not Co-Prime", max, min);

    // // 2nd Approach
    // int hcf;
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

    // if (hcf == 1)
    //     printf("\n%d and %d Are Co-Prime", max, min);
    //   else
    //         printf("\n%d and %d Are Not Co-Prime", max, min);

    // // 3rd Approach
    // int lcm, hcf;
    // for (int j = max; j <= num1 * num2; j += max)
    // {
    //     if (j % num1 == 0 && j % num2 == 0)
    //     {
    //         lcm = j;
    //         break;
    //     }
    // }
    // hcf = num1 * num2 / lcm;
    // if (hcf == 1)
    //     printf("\n%d and %d Are Co-Prime", max, min);
    // else
    //     printf("\n%d and %d Are Not Co-Prime", max, min);

    // // 4th Approach
    // int lcm, hcf;
    // for (int i = max; i <= num1 * num2; i += max)
    // {
    //     if (i % min == 0)
    //     {
    //         lcm = i;
    //         break;
    //     }
    // }
    // hcf = num1 * num2 / lcm;
    //  if (hcf == 1)
    //     printf("\n%d and %d Are Co-Prime", max, min);
    //   else
    //         printf("\n%d and %d Are Not Co-Prime", max, min);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
