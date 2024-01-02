// C program to add two Complex Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    float real1, imag1, real2, imag2, realSum, imagSum;
    printf("\nEnter First Complex Number (Real Part and Imaginary Part) => ");
    scanf("%f%f", &real1, &imag1);
    printf("\nEnter Second Complex Number (Real Part and Imaginary Part) => ");
    scanf("%f%f", &real2, &imag2);
    realSum = real1 + real2;
    imagSum = imag1 + imag2;
    printf("\nSum of (%.2f + %.2fi) and (%.2f + %.2fi) => (%.2f + %.2fi)", real1, imag1, real2, imag2, realSum, imagSum);

    getch();
    return 0;
}
// Main Function End
