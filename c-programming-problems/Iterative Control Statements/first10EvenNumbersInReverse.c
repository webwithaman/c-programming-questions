// C Program to Print First 10 Even Natural Numbers In Reverse

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Even Natural Numbers

    printf("\n>>>>>>>>>>> First %d Even Natural Numbers In Reverse Order <<<<<<<<<<<<<\n", n);

    // 1st Approach
    for (int i = n; i; i--)
        printf("\n%d", i * 2);

    // 2nd Approach
    // for (int i = n*2; i ; i -= 2)
    //     printf("\n%d", i);

    // 3rd Approach
    // for (int i = n * 2; i; i--)
    // {
    //     if (!(i % 2)) // we can also write if(i%2 == 0)
    //         printf("\n%d", i);
    // }

    getch();
    return 0;
}
// Main Function End
