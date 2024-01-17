// //  C program to print return value of scanf() function

// Header files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    int num1, num2, returnValue;
    printf("\nEnter Two Numbers => ");
    returnValue = scanf("%d %d", &num1, &num2);
    printf("\nReturn of scanf(\"%%d %%d\",&num1,&num2) => %d", returnValue);
    printf("\nIt means scanf() returns the number of values taken as input");

    getch();
    return 0;
}
// // Main Function End