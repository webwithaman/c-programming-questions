// // Write a function to print first N odd natural numbers. (TSRN)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
void firstNOddNaturalNums(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Odd Natural Numbers => ");
    scanf("%d", &n);
    firstNOddNaturalNums(n);

    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Print First N Odd Natural Numbers
void firstNOddNaturalNums(int n)
{
    putch(10); // // It means putch('\n') , ASCII of '\n' is 10

    if (n < 0)
    {
        puts("!!! Invalid Input...");
        return;
    }

    printf(">>>>>>> First %d Odd Natural Numbers <<<<<<<\n", n);

    for (int i = 0; i < n; i++)
        printf("%d ", i * 2 + 1);

    putch('\n');
}
