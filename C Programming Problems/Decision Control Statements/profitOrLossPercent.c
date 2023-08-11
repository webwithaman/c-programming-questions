// C Program to Take Cost And Selling Price From User And Print Profit or Loss Percentage


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    float costPrice, sellPrice, percentage;
    printf("\nEnter Cost Price => ");
    scanf("%f", &costPrice);
    printf("\nEnter Selling Price => ");
    scanf("%f", &sellPrice);

    percentage = (sellPrice - costPrice) / costPrice * 100;

    if (percentage > 0)
        printf("\nProfit Percentage => %.2f", percentage);
    else if (percentage)
        printf("\nLoss Percentage => %.2f", percentage);
    else
        printf("\nNeither Profit Nor Loss");


    getch();
    return 0;
}
// Main Function End
