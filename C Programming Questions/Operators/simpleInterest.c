// C Program to Calculate Simple Interest


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

     float principalAmount,time,rateOfInterest,simpleInterest;

     printf("\nEnter Principal Amount => ");
     scanf("%f",&principalAmount);

     printf("\nEnter Rate of Interest => ");
     scanf("%f",&rateOfInterest);

     printf("\nEnter Time => ");
     scanf("%f",&time); 

     simpleInterest = principalAmount * rateOfInterest * time / 100;

     printf("\nSimple Interest => %.2",simpleInterest);


    getch();
    return 0;
}
// Main Function End
