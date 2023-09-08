// C Program to Take Marks of 5 Students. Assume Marks Are Given Out of 100 And Passing Marks Are 33. Now, Display Whether the Candidate is Passed or Failed


// Header files
#include <stdio.h>
#include <conio.h>

#define PASSING_MARKS 33


// Main Function Start
int main()
{

    float m1, m2, m3, m4, m5;
    printf("\nEnter Marks of 5 Subjects Out of 100 => ");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);


    if (m1 > PASSING_MARKS - 1 && m2 > PASSING_MARKS - 1 && m3 > PASSING_MARKS - 1 && m4 > PASSING_MARKS - 1 && m5 > PASSING_MARKS - 1)
        printf("\nCandidate Passed ");
    else
        printf("\nCandidate Failed ");


    getch();
    return 0;
}
// Main Function End
