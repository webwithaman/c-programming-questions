// //  C program to find Position of first 1 when searching from LSB to MSB.

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num, position = 1;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);
    int copyNum = num;

    // // // // 1st Approach
    // // if (copyNum)
    // // {
    // //     while (!(num & 1))
    // //     {
    // //         num >>= 1;
    // //         position++;
    // //     }

    // //     printf("\nPostion of First 1 In the Binary of %d => %d\n", copyNum, position);
    // // }
    // // else
    // //     printf("\nThere is No 1 in the Binary of 0\n");

    // // // // 2nd Approach
    while (num)
    {
        if (num & 1)
            break;
        num >>= 1;
        position++;
    }

    if (copyNum)
        printf("\nPostion of First 1 In the Binary of %d => %d\n", copyNum, position);
    else
        printf("\nThere is No 1 in the Binary of 0\n");

    getch();
    return 0;
}
// // Main Function End
