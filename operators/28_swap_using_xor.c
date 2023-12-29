// C program to Swap values of Two int Variables without using Bitwise XOR (^)

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int a, b;
    printf("\nEnter value of a => ");
    scanf("%d", &a);
    printf("\nEnter value of b => ");
    scanf("%d", &b);
    printf("\n\n>>>>>>>>>>> Before Swapping <<<<<<<<<<<\n");
    printf("a => %d, b => %d\n", a, b);

    // // using Bitwise XOR (^)
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\n\n>>>>>>>>>>> After Swapping <<<<<<<<<<<\n");
    printf("a => %d, b => %d\n", a, b);

    getch();
    return 0;
}
// Main Function End
