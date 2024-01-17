//  C program to print greater among three numbers.Print one number of among if two or  all are the same

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    float num1, num2, num3;
    printf("\nEnter Three Numbers to Check Greater => ");
    scanf("%f%f%f", &num1, &num2, &num3);

    // using nested f-else
    if (num1 > num2)
    {
        if (num1 > num3)
            printf("\n%f is Greater", num1);
        else
            printf("\n%f is Greater", num3);
    }
    else
    {
        if (num2 > num3)
            printf("\n%f is Greater", num2);
        else
            printf("\n%f is Greater", num3);
    }

    // using conditional operator
    // int greater = num1 > num2 ? num1 > num3 ? num1 : num3 : num2 > num3 ? num2
    //                                                                     : num3;
    // printf("\n%f is Greater", greater);

    // using logical operator and if-else-if ladder
    // if (num1 > num2 && num1 > num3)
    //     printf("\n%f is Greater", num1);
    // else if (num2 > num3)
    //     printf("\n%f is Greater", num2);
    // else
    //     printf("\n%f is Greater", num3);

    printf("\n");
    getch();
    return 0;
}
// Main Function End
