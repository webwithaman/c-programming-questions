// // Write a function to print all Prime numbers between two given numbers. (TSRN)

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Function Declaration (Prototype)
int isPrime(int);
void primeBetweenTwo(int, int);

// // Main Function Start
int main()
{
    int beg, end;
    printf("\nEnter Two Numbers to Print All Prime Numbers Between Them => ");
    scanf("%d%d", &beg, &end);

    primeBetweenTwo(beg, end);

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

// // Function to Print All Prime Numbers Between Two Numbers
void primeBetweenTwo(int beg, int end)
{
    putch(10);

    if (beg > end)
        beg = (beg + end) - (end = beg); // // swap values

    printf(">>>>>>>>> Prime Numbers Between %d and %d <<<<<<<<<<\n", beg, end);

    int primeNumFound = 0;

    while (beg <= end)
    {
        if (isPrime(beg) == 1)
        {
            printf("%d ", beg);
            primeNumFound = 1;
        }
        beg++;
    }

    if (!primeNumFound)
        printf("\nThere is No Prime Numbers Between Entered Numbers...");

    putch(10);
}
