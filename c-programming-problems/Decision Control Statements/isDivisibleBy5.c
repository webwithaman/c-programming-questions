// C Program to Check Whether A Number is Divisible By 5 or Not

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
    if (num % 5)
        printf("\n%d is Not Divisible By 5", num);
    else
        printf("\n%d is Divisible By 5", num);


    // 2nd Approach
    // if (num % 5 == 0)
    //     printf("\n%d is Divisible By 5", num);
    // else
    //     printf("\n%d is Not Divisible By 5", num);


    // 3rd Approach
    // if (!(num % 5))
    //     printf("\n%d is Divisible By 5", num);
    // else
    //     printf("\n%d is Not Divisible By 5", num);


    getch();
    return 0;
}
// Main Function End
