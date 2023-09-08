// C Program to Find Reverse A Given Number

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int num, reverseOfNum = 0;
    printf("\nEnter A Number to Find Its Reverse => ");
    scanf("%d", &num);

    while (num)
    {
        reverseOfNum = reverseOfNum * 10 + num % 10;
        num /= 10;
    }

    printf("\nReverse of Entered Number => %d\n", reverseOfNum);

    getch();
    return 0;
}
// Main Function End
