// C Program to Take A Number And A Digit From User And Then Append The Digit in the Number => Number = 635 and Digit = 7 Then Make it => 6357


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num, digit, resultNum;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);
    printf("\nEnter A Digit Which You Want to Append In The Number => ");
    scanf("%d", &digit);


    if (num * digit < 0)
        resultNum = num < 0 ? (num * 10) + -digit : (num * 10) + -digit;
    else
        resultNum = num * 10 + digit;


    printf("\nAfter Appending %d In %d => %d\n", digit, num, resultNum);

    getch();
    return 0;
}
// Main Function End
