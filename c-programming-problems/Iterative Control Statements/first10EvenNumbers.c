// C Program to Print First 10 Even Natural Numbers

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Even Natural Numbers

    printf("\n>>>>>>>>>>> First %d Even Natural Numbers <<<<<<<<<<<<<\n", n);

    // 1st Approach
    for (int i = 1; i <= n; i++)
        printf("\n%d", i * 2 );

    // 2nd Approach
    // for (int i = 2; i <= n * 2; i += 2)
    //     printf("\n%d", i);

    // 3rd Approach
    // for (int i = 2; i <= n * 2; i++)
    // {
    //     if (!(i % 2)) // we can also write if(i%2 == 0)
    //         printf("\n%d", i);
    // }

    getch();
    return 0;
}
// Main Function End
