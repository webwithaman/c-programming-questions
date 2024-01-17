// C program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    float m1, m2, m3, m4, m5;
    printf("\nEnter Marks of 5 Subjects => ");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    if (m1 > 32 && m2 > 32 && m3 > 32 && m4 > 32 && m5 > 32)
        printf("\nYou are Pass");
    else
        printf("\nYou are Fail");

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
