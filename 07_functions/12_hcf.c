// // Write a function to calculate HCF of two numbers. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Function Declaration (Prototype)
unsigned int lcmOfTwo(int, int);
unsigned int hcfOfTwo(int, int);

// // Main Function Start
int main()
{
    int num1, num2;
    printf("\nEnter Two Numbers to Calculate HCF => ");
    scanf("%d%d", &num1, &num2);

    unsigned int hcf = hcfOfTwo(num1, num2);

    if (hcf == -1)
        printf("\n!!! Invalid Input,Plz Enter Positive Number.HCF of Negative Numbers is Undedined...");
    else if (hcf)
        printf("\nHCF of %d and %d => %u", num1, num2, hcf);
    else
        printf("\n!!! Invalid Input,Plz Enter Positive Number.HCF of 0 and 0 is Undefined Exist...");
    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definitions 👇👇

// // Function to Calculate LCM of Two Numbers
unsigned int lcmOfTwo(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
        return 0; // // Invalid Input (LCM of 0 is Undefined)

    num1 = fabs(num1);
    num2 = fabs(num2);

    // // 1st Approach
    int max = num1 > num2 ? num1 : num2;
    int min = num1 < num2 ? num1 : num2;

    for (int i = max; i <= num1 * num2; i += max)
    {
        if (i % min == 0)
            return i;
    }

    // // 2nd Approach
    // // return num1 * num2 / hcfOfTwo(num1, num2);
}

// // Function to Calculate HCF of Two Numbers
unsigned int hcfOfTwo(int num1, int num2)
{
    if (num1 == 0 && num2 == 0)
        return 0; // // Invalid Input (HCF of 0 and 0 is Undefined)
    else if (num1 < 0 || num2 < 0)
        return -1; // // Invalid Input Negative Numbers is Undefined

    int max = num1 > num2 ? num1 : num2;
    int min = num1 < num2 ? num1 : num2;

    if (min == 0)
        return max; // // HCF of Any Non-Zero with Zero is that Non-Zero Number

    // // 1st Approach
    if (max % min == 0)
        return min;
    else
    {
        for (int i = min / 2; i; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
                return i;
        }
    }

    // // 2nd Approach
    // // int remainder;
    // // do
    // // {
    // //    remainder = max % min;
    // //    max = min;
    // //    min = remainder;
    // // } while (remainder);

    // // return max;

    // // 3rd Approach
    // // return num1 * num2 / lcmOfTwo(num1, num2);
}

// // Function to Calculate HCF of Two Numbers
unsigned int hcfOfTwo(int num1, int num2)
{
    if (num1 == 0 && num2 == 0)
        return 0; // // Invalid Input (HCF of 0 and 0 is Undefined)
    else if (num1 < 0 || num2 < 0)
        return -1; // // Invalid Input Negative Numbers is Undefined

    int max = num1 > num2 ? num1 : num2;
    int min = num1 < num2 ? num1 : num2;

    if (min == 0)
        return max; // // HCF of Any Non-Zero with Zero is that Non-Zero Number

    // // 1st Approach
    if (max % min == 0)
        return min;
    else
    {
        for (int i = min / 2; i; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
                return i;
        }
    }

    // // 2nd Approach
    // // int remainder;
    // // do
    // // {
    // //    remainder = max % min;
    // //    max = min;
    // //    min = remainder;
    // // } while (remainder);

    // // return max;

    // // 3rd Approach
    // // return num1 * num2 / lcmOfTwo(num1, num2);
}
