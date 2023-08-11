// C Program to Check Whether A Number is Positive or Non-Positive


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    if (num > 0)
        printf("\n%d is A Postive Number", num);
    else
        printf("\n%d is A Positive Number", num);


    getch();
    return 0;
}
// Main Function End
