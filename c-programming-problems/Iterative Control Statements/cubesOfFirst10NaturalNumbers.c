// C Program to Print Cubes of First 10 Natural Numbers

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // Squares of First n Natural Numbers

    printf("\n>>>>>>>>>>> Cubes of First %d Natural Numbers <<<<<<<<<<<<<\n", n);


    // 1st Approach (while loop)
    int i = 1;
    while (i <= n)
    {
        printf("\n%d", i * i * i);
        i++;
    }


    // 2nd Approach (do while loop)
    // int i = 1;
    // do
    // {
    //     printf("\n%d", i * i * i);
    // } while (++i <= n);


    // 3rd Approach (for loop)
    // for (int i = 1; i <= n; i++)
    //     printf("\n%d", i * i * i);



    getch();
    return 0;
}
// Main Function End
