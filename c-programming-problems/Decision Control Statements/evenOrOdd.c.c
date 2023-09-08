// C Program to Check Whether A Number is Even or Odd


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);


    // 1st Approach
    if (num % 2)
        printf("\n%d is A Odd Number", num);
    else
        printf("\n%d is A Even Number", num);


    // 2nd Approach
    // if (num % 2 == 0)
    //     printf("\n%d is A Even Number", num);
    // else
    //     printf("\n%d is A Odd Number", num);


    // 3rd Approach
    // if (!(num % 2))
    //     printf("\n%d is A Even Number", num);
    // else
    //     printf("\n%d is A Odd Number", num);


    getch();
    return 0;
}
// Main Function End
