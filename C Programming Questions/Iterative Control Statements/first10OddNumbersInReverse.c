// C Program to Print First 10 Odd Natural Numbers In Reverse Order

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Odd Natural Numbers

    // 1st Approach
    for (int i = n; i; i--)
        printf("\n%d", i * 2 - 1);

    // 2nd Approach
    // for (int i = n * 2 - 1; i > 0; i -= 2)
    //     printf("\n%d", i);

    // 3rd Approach
    // for (int i = n * 2 - 1; i; i--)
    // {
    //     if (i & 1) // we can also write if(i%2)
    //         printf("\n%d", i);
    // }

    getch();
    return 0;
}
// Main Function End
