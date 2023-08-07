// C Program to Take A Three Digit Number And Rotate Its Digit By One Position Towards Rigth => Ex. 638 Convert it into 863


// Header files
#include <stdio.h>
#include <conio.h>
#include <math.h>


// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Three Digit Number => ");
    scanf("%d", &num);


    // If Entered Number Have Three Digits
    int resultNum;
    resultNum = num % 10 * 100 + num / 10;
    printf("\nAfter Rotating the Digits of %d By One Position Towards Right => %d", num, resultNum);


    // Using Loop If Entered Number have Any Number of Digits
    // int numOfDigits = 0, copyOfNum = num;
    // double resultNum;
    // while (copyOfNum)
    // {
    //     numOfDigits++;
    //     copyOfNum /= 10;
    // }
    // resultNum = num % 10 * pow(10, numOfDigits - 1) + num / 10;
    // printf("\nAfter Rotating the Digits of %d By One Position Towards Right => %.0lf", num, resultNum);


    getch();
    return 0;
}
// Main Function End
