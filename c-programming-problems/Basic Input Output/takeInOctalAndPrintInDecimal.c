// C Program to Take Input A Number In Octal Form and Print its Decimal Representation.


//Header files
#include<stdio.h>
#include<conio.h>


// Main Function Start
int main(){

    int octalNum;
    printf("\nEnter An Octal Number to Convert It Into Decimal Form => ");
    scanf("%o",&octalNum); // %o Format Specifier to Take Input in Octal Form

    printf("\nDecimal Representation of %o => %d\n",octalNum,octalNum); 

    getch(); 
    return 0;
}
// Main Function End
