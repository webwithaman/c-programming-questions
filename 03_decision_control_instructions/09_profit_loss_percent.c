// // C program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    float cp, sp, percent;
    printf("\nEnter Selling Price => ");
    scanf("%f", &sp);
    printf("\nEnter Cost Price => ");
    scanf("%f", &cp);

    percent = (sp - cp) / cp * 100;

    if (percent > 0)
        printf("\nYou are Making %.2f%% Profit", percent);
    else if (percent)
        printf("\nYou are in Loss of %.2f%%", -percent);
    else
        printf("\nYou are neither in Profit nor in Loss");

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
