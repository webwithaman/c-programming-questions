// C Program to Print Return Value of printf() Function.


// Header files
#include <stdio.h>
#include <conio.h>



// Main Function Start
int main()
{

    int returnValueOfPrintf = printf("Hello"); // printf() Returns the Number of Character Successfully Printed On Screen. In this Case it Will Return 5 Because "Hello" has 5 Characters.

    printf("\nReturn Value of scanf() => %d",returnValueOfPrintf); 

   

    getch();
    return 0;
}
// Main Function End
