// WAP to Take A Number And A Digit From User And Then Append The Digit in the Number - Number = 635 and Digit = 8 Then Make it => 6358
// 👉 Output => Number => 635 and Digit => 8. Result After Appending 7 to 635 => 6358

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start
int main()
{
    int num, digit, result;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);
    printf("\nEnter A Positive Digit to Append in Number => ");
    scanf("%1d", &digit);

    digit = fabs(digit);

    result = num > 0 ? num * 10 + digit : num * 10 - digit;

    printf("\nNumber => %d and Digit => %d", num, digit);
    printf("\nResult After Appending %d to %d => %d\n", digit, num, result);

    getch();
    return 0;
}
// Main Function End
