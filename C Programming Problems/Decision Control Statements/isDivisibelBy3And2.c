// C Program to Check Whether A Number is Divisible By 3 And 2


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
    // if (num % 3 == 0 && num % 2 == 0)
    //     printf("\n%d is Divisible By Both 3 And 2", num);
    // else
    //     printf("\n%d is Not Divisible By Both 3 And 2", num);


    // 2nd Approach
    if (!(num % 3) && !(num % 2))
        printf("\n%d is Divisible By Both 3 And 2", num);
    else
        printf("\n%d is Not Divisible By Both 3 And 2", num);


    getch();
    return 0;
}
// Main Function End
