// // Write a program in C to find the square of any number using the function.

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
long long unsigned int square(int);

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Find Its Square => ");
    scanf("%d", &num);

    printf("\nSquare of %d => %llu", num, square(num));

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Calculate Factorial of A Number
long long unsigned int square(int num)
{
    long long unsigned int sq = num * num;
    return sq;
}
