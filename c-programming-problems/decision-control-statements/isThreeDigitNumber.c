// C Program to Check Whether A Number is A Three Digit Number or Not


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    // 1st Approach
    // if (num > 99 && num < 1000 || num < -99 && num > -1000)
    //     printf("\n%d is Three Digit Number", num);
    // else
    //     printf("\n%d is Not A Three Digit Number", num);


    // 2nd Approach (Using Loop)
    // int count = 0, copyNum = num;
    // while (copyNum)
    // {
    //     count++;
    //     copyNum /= 10;
    // }

    // if (count == 3)
    //     printf("\n%d is Three Digit Number", num);
    // else
    //     printf("\n%d is Not A Three Digit Number", num);


    getch();
    return 0;
}
// Main Function End
