// //  C program to reverse a given number

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int num, rev = 0;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    // // 1st Approach
    // // while (num)
    // // {
    // //     rev = rev * 10 + num % 10;
    // //     num /= 10;
    // // }
    // // printf("\nReverse of Entered Number => %d", rev);

    // // 2nd Approach (Handle All cases)
    int copyNum = num;
    while (num)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    if (copyNum < 0)
    {
        printf("\nReverse of Entered Number => -");
        rev = -rev;
    }

    // // If Number have Trailing Zeros (Count Number of Trailing Zeros)
    int count = 0;
    while (!(copyNum % 10))
    {
        count++;
        copyNum /= 10;
    }

    // //  Print Zeros
    while (count--)
    {
        printf("0");
    }
    printf("%d", rev);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End