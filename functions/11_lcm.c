// Write a function to calculate LCM of two numbers. (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Function Declaration (Prototype)
unsigned int lcmOfTwo(int, int);
unsigned int hcfOfTwo(int, int);

// Main Function Start
int main()
{
    int num1, num2;
    printf("\nEnter Two Numbers to Calculate LCM => ");
    scanf("%d%d", &num1, &num2);
    unsigned int lcm = lcmOfTwo(num1, num2);
    if (lcm == -1)
        printf("\n!!! Invalid Input,Plz Enter Positive Number.LCM of Zero Does not Exist...");
    else
        printf("\nLCM of %d and %d => %d", num1, num2, lcm);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions 👇👇

// Function to Calculate LCM of Two Numbers
unsigned int lcmOfTwo(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
        return -1;

    num1 = fabs(num1);
    num2 = fabs(num2);

    // // 1st Approach
    // int max = num1 > num2 ? num1 : num2;
    // int min = num1 < num2 ? num1 : num2;

    // for (int i = max; i <= num1 * num2; i += max)
    // {
    //     if (i % min == 0)
    //         return i; // Invalid Input
    // }

    // // 2nd Approach
    return num1 * num2 / hcfOfTwo(num1, num2);
}

// Function to Calculate HCF of Two Numbers
unsigned int hcfOfTwo(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
        return -1; // Invalid Input

}
