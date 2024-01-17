// WAP to Take A Three Digit Number And Rotate Its Digit By One Position Towards Right => Ex. 638 Convert it into 863.
// 👉 Output => 638 After Rotating One Digit Towards Right => 863

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{
    int num, result;
    printf("\nEnter A Three Digits Positive Integer => ");
    scanf("%3d", &num);

    if (num <= 0 || num < 100)
    {
        printf("\nInvalid Input !!!\nPlz Enter Three Digits Positive Integer\n\n");
        exit(0);
    }

    result = num % 10 * 100 + num / 10;

    printf("\n%d After Rotating One Digit Towards Right => %d\n", num, result);

    getch();
    return 0;
}
// Main Function End
