// C Program to Swap Values of Two int Variables Without Third Vatiable


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int a, b;
    printf("\nEnter Value of a => ");
    scanf("%d", &a);
    printf("\nEnter Value of b => ");
    scanf("%d", &b);

    printf("\n\n>>>>>>>>>>>> Values Before Swapping <<<<<<<<<<<<<\n");
    printf("a => %d ,b => %d", a, b);


    // 1st Approach
    b = (a + b) - (a = b);

    // 2nd Approach
    // a = a+b;
    // b = a-b;
    // a = a-b;


    // 3rd Approach
    // a = a^b;
    // b = a^b;
    // a = a^b;


    printf("\n\n>>>>>>>>>>>> Values After Swapping <<<<<<<<<<<<<\n");
    printf("a => %d ,b => %d\n", a, b);


    getch();
    return 0;
}
// Main Function End
