// // Write a function to check whether a given number is Prime or not. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Function Declaration (Prototype)
int isPrime(int);

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Check It is Prime or Not => ");
    scanf("%d", &num);

    int result = isPrime(num);

    if (result == -1)
        printf("\n!!! Invalid Input,Plz Enter Positive Number Greater than 1...");
    else if (result)
        printf("\nYes, %d is a Prime Number", num);
    else
        printf("\nNo, %d is not a Prime Number", num);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definitions 👇👇

// // Function to Check Whether A Number is Prime or Not
int isPrime(int num)
{
    if (num < 2)
        return -1; // // Invalid Input

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}
