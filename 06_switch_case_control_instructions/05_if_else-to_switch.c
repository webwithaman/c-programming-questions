// // Convert the following if - else - if construct into switch case:

// // if (var == 1)
// //     printf("good");
// // else if (var == 2)
// //     printf("better");
// // else if (var == 3)
// //     printlf("best");
// // else
// //     printf("invalid");

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int var;
    printf("\nEnter Any One of These Numbers (1,2,3) => ");
    scanf("%d", &var);

    switch (var)
    {
    case 1:
        printf("\nGood");
        break;
    case 2:
        printf("\nBetter");
        break;
    case 3:
        printf("\nBest");
        break;
    default:
        printf("\nInvalid...");
        break;
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
