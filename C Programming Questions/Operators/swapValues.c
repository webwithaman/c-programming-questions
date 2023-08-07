// C Program to Swap Values of Two int Variables


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

    // Swapping Using Third Variable
    int temp = a;
    a = b;
    b = temp;

    printf("\n\n>>>>>>>>>>>> Values After Swapping <<<<<<<<<<<<<\n");
    printf("a => %d ,b => %d", a, b);


    getch();
    return 0;
}
// Main Function End
