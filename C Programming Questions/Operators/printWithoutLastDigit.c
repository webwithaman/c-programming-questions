// C Program to Print A Number Without its Last Digit


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);

    printf("%d Without Last Digit => %d", num, num / 10);

    getch();
    return 0;
}
// Main Function End
