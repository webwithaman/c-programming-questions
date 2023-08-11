// C Program to Check Whether A Number is Divisible By 7 Or Divisible By 3


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
    // if (num % 7 == 0 || num % 3 == 0)
    //     printf("\n%d is Divisible By One of 7 And 3", num);
    // else
    //     printf("\n%d is Not Divisible By Both 7 And 3", num);


    // 2nd Approach
    // if (!(num % 3) || !(num % 2))
    //     printf("\n%d is Divisible By One of 7 And 3", num);
    // else
    //     printf("\n%d is Not Divisible By Both 7 And 3", num);


    getch();
    return 0;
}
// Main Function End
