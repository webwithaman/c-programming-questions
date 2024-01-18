// // Write a function to find the next prime number of a given number. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Function Declaration (Prototype)
int nextPrime(int);
int isPrime(int);

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Find Next Prime Number of it => ");
    scanf("%d", &num);

    printf("\nNext Prime Number of %d => %d", num, nextPrime(num));

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definitions 👇👇

// // Function to Find Next Prime Number of A Given Number
int nextPrime(int num)
{
    while (isPrime(++num) != 1)
        ;

    return num;
}

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
