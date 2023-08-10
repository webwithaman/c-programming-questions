// C Program to Check Whether A Number is Positive , Negative or Zero


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
    else if (num)
        printf("\n%d is A Negative Number", num);
    else
        printf("\nEntered Number is Zero");


    getch();
    return 0;
}
// Main Function End
