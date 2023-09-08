// C Program to Take Input A Number In Hexadecimal Form and Print its Decimal Representation.


//Header files
#include<stdio.h>
#include<conio.h>


// Main Function Start
int main(){

    int hexadecimalNum;
    printf("\nEnter A Hexadecimal Number to Convert It Into Decimal Form => ");
    scanf("%x",&hexadecimalNum); // %x Format Specifier to Take Input in Hexadecimal Form

    printf("\nDecimal Representation of %x => %d\n",hexadecimalNum,hexadecimalNum); 

    getch(); 
    return 0;
}
// Main Function End
