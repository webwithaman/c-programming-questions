// C Program to Add Two Complex Numbers

// Header files
#include <stdio.h>
#include <conio.h>


// Create A Structure to Represent A Complex Number
typedef struct
{
    int real;
    int imag;
} complex;


// Function to Two Add Complex Numbers
complex addComplex(complex, complex);

// Function Display Complex Number
void inputComplex(complex *);

// Function to Input Complex Number
void displayComplex(complex);



// Main Function Start
int main()
{

    complex c1, c2, c3;
    printf("\n>>>>>>>>>>>>>> Enter 1st Complex Number<<<<<<<<<<<<<<\n");
    inputComplex(&c1);
    printf("\n>>>>>>>>>>>>>> Enter 2nd Complex Number<<<<<<<<<<<<<<\n");
    inputComplex(&c2);

    c3 = addComplex(c1, c2);

    printf("\n>>>>>>>>>>>>>> Sum of Entered Complex Numbers <<<<<<<<<<<<<<<<\n");
    displayComplex(c3);

    getch();
    return 0;
}
// Main Function End



// Function to Two Add Complex Numbers
complex addComplex(complex c1, complex c2)
{
    complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function Display Complex Number
void displayComplex(complex c)
{
    printf("\n%d + %di\n", c.real, c.imag);
}

// Function to Input Complex Number
void inputComplex(complex *c)
{
    printf("\nEnter Real Number => ");
    scanf("%d", &c->real);
    printf("\nEnter Imaginary Number => ");
    scanf("%d", &c->imag);
}