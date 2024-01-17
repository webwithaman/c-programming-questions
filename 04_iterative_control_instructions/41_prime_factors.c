// C program to find all Prime Factors of a given Number

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number to Find Its Prime Factors => ");
    scanf("%d", &num);

    // Handling Invalid Input
    if (num <= 0)
    {
        printf("!!! Invalid Input...Please Enter Positive Number");
        exit(0);
    }
    else if (num == 1)
    {
        printf("\nThere is No Prime Factors of 1...\n1 is Neither Prime Nor Composite..");
        exit(0);
    }

    printf("\n>>>>>>>> Prime Factors of %d <<<<<<<<\n", num);

    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num /= i;
        }
    }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
