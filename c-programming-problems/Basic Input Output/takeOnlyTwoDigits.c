// C Program to take Input An Integer Number and take Only First Two Digits of that Number and Omit Rest of the Digits.



//Header files
#include<stdio.h>
#include<conio.h>


// Main Function Start
int main(){

   int num;
   printf("\nEnter An Integer => ");
   scanf("%2d",&num); // Specify width 2 now scanf() will read only two digits ,If User Enter -5423 then It will take only -5

   printf("\nFirst Two Digits of Entered Number => %d",num);



    getch(); 
    return 0;
}
// Main Function End