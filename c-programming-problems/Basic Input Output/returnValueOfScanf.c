// C Program to Print Return Value of scanf() Function.


// Header files
#include <stdio.h>
#include <conio.h>



// Main Function Start
int main()
{
    int num1,num2;
    printf("\nEnter two Numbers => ");
    int returnValueOfScanf =  scanf("%d%d",&num1,&num2); // scanff() Returns the Number of Values Successfully Taken from As Input. In this Case it Will Return 2 Because We Are Taking 2 Values.

    printf("\nReturn Value of scanf() => %d",returnValueOfScanf); 

   

    getch();
    return 0;
}
// Main Function End
