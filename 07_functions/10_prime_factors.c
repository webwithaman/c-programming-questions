// // Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
void primeFactors(int);

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Print All Prime Factors of It => ");
    scanf("%d", &num);
    primeFactors(num);

    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Print First N Odd Natural Numbers
void primeFactors(int num)
{
    putch(10); // // It means putch('\n') , ASCII of '\n' is 10

    if (num < 2)
    {
        puts("!!! Invalid Input, Use Positive Numbers Greater than 1...");
        return;
    }

    printf(">>>>>>> Prime Factors of %d  <<<<<<<\n", num);

    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num /= i;
        }
    }

    putch('\n');
}
