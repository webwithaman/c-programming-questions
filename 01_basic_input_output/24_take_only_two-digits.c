// C program to take input an integer number and now take only first two digits of that number which user enters and omit rest of the digits

// Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int num;
    printf("\nEnter An Positive Integer (Program Can take Only First 2 Digits of Input Number) => ");
    scanf("%2d", &num); // %2d means scanf() will take only first 2 digits of number that will be entered
    printf("\nEntered Number => %d\n", num);

    getch();
    return 0;
}
// // Main Function End