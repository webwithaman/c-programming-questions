// C Program to Print First 10 Natural Numbers

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Natural Numbers

    printf("\n>>>>>>>>>>> First %d Natural Numbers <<<<<<<<<<<<<\n", n);

    // 1st Approach (while loop)
    int i = 1;
    while (i <= n)
        printf("\n%d", i++);

    // 2nd Approach (while loop)
    // int copyOfN=n;
    // while (copyOfN)
    //     printf("\n%d",n + 1 - copyOfN--);


    // 3rd Approach (do while loop)
    // int i = 1;
    // do
    // {
    //     printf("\n%d", i);
    // } while (++i <= n);


    //  4th Approach (do while loop)
    // int copyOfN = n;
    // do
    // {
    //     printf("\n%d", n + 1 - copyOfN);
    // } while (--copyOfN);


    // 5th Approach (for loop)
    // for (int i = 1; i <= n; i++)
    //     printf("\n%d", i);

    // 6th Approach (for loop)
    // for (int i = n; i ; i--)
    //     printf("\n%d", n+1-i);

   
    getch();
    return 0;
}
// Main Function End
