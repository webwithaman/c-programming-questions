// // Write a recursive function to print reverse of a given number.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Function Declaration (Prototype)
void printReverse(int);

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Print Reverse of it => ");
    scanf("%d", &num);

    printf("\n>>>>>>>> Reverse of %d <<<<<<<<<\n", num);
    printReverse(num);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Recursive Function to Print Reverse of A Number
void printReverse(int num)
{
    if (num)
    {
        printf("%d", num % 10);
        printReverse(num / 10);
    }
}