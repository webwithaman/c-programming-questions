//  C program to convert last Digit of a Number into Zero => Digit = 245 Make it => 240.
// 👉 Output => Result After Converting Last Digit of 245 into 0 => 245

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int num, result;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);

    // // 1st Approach
    result = num / 10 * 10;

    // // 2nd Approach
    // result = num - num % 10;

    printf("\nResult After Converting Last Digit of %d into 0 => %d", num, result);

    getch();
    return 0;
}
// Main Function End
