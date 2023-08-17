// C Program to Take Input A Number In Decimal Form and Print its Octal Representation.


//Header files
#include<stdio.h>
#include<conio.h>


// Main Function Start
int main(){

    int decimalNum;
    printf("\nEnter A Number to Convert It Into Octal Form => ");
    scanf("%d",&decimalNum);

    printf("\nOctal Representation of %d => %o\n",decimalNum,decimalNum); // %o Format Specifier to Print Octal Form.

    getch(); 
    return 0;
}
// Main Function End
