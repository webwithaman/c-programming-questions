// // Write a function to print first N natural numbers (TSRN)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
void firstNNaturalNums(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Natural Numbers => ");
    scanf("%d", &n);
    firstNNaturalNums(n);

    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Print First N Natural Numbers
void firstNNaturalNums(int n)
{
    putch(10); // // It means putch('\n') , ASCII of '\n' is 10

    if (n < 0)
    {
        puts("!!! Invalid Input...");
        return;
    }

    printf(">>>>>>> First %d Natural Numbers <<<<<<<\n", n);

    for (int i = 1; i <= n; i++)
        printf("%d ", i);

    putch('\n');
}
