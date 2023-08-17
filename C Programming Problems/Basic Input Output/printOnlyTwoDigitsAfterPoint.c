// C Program to Take A Floating Point Number and Print Only Two Digits After the Decimal Point.

// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    float num;
    printf("\nEnter A Floating Point Number => ");
    scanf("%f",&num);

    printf("\n%f After With Only Two Digits After Decimal Point => %.2f",num,num);
    
    getch();
    return 0;
}
// Main Function End
