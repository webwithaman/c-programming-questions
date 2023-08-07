// C Program to Make Last Digit of A Number As Zero => Digit = 245 Make it => 240


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);

    // 1st Approach
    printf("\n%d After Making Last Digit As Zero => %d", num, num - num % 10);

    // 2nd Approach
    // printf("\n%d After Making Last Digit As Zero => %d", num, num / 10 * 10);

    getch();
    return 0;
}
// Main Function End
