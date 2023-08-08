// C Program to Print Unit Digit of A Given Number


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);

    printf("Unit Digit of %d => %d ", num, num % 10);

    getch();
    return 0;
}
// Main Function End
