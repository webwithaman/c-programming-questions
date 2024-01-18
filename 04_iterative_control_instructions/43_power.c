// // C proram to input base and exponent from user then calculate power

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Main Function Start
int main()
{

    int base, exp;
    float result = 1;
    printf("\nEnter Base => ");
    scanf("%d", &base);
    printf("\nEnter Exponent => ");
    scanf("%d", &exp);

    int copyExp = fabs(exp);

    while (copyExp--)
        result *= base;

    result = exp < 0 ? 1 / result : result;

    printf("\nResult In Eponential form => %e", result);
    printf("\nResult In Normal Form => %f", result);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
