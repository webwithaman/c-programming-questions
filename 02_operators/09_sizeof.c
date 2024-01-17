//  C program to demonstrate the use of sizeof() operator

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    char c;
    int dint;
    short int sint;
    long int lint;
    long long llint;
    float flt;
    double dbl;
    long double ldbl;

    // sizeof() operator provides the number of Bytes taken by the variable of any Data type.
    // We can use following variants :-
    // sizeof(data type)
    // sizeof(variable)
    // sizeof(expression)

    // Use of sizeof(Data type)
    printf("\n>>>>>>>>>> Use of sizeof(data type) <<<<<<<<<<<<<<");
    printf("\nSize of sizeof(char)          => %d Byte", sizeof(char));
    printf("\nSize of sizeof(short int)     => %d Bytes", sizeof(short int));
    printf("\nSize of sizeof(int)           => %d Bytes", sizeof(int));
    printf("\nSize of sizeof(long int)      => %d Bytes", sizeof(long int));
    printf("\nSize of sizeof(long long int) => %d Bytes", sizeof(long long int));
    printf("\nSize of sizeof(float)         => %d Bytes", sizeof(float));
    printf("\nSize of sizeof(double)        => %d Bytes", sizeof(double));
    printf("\nSize of sizeof(long double)   => %d Bytes", sizeof(long double));

    // Use of sizeof(Varibale)
    printf("\n\n>>>>>>>>>> Use of sizeof(variable) <<<<<<<<<<<<<<");
    printf("\nSize of sizeof(c)     => %d Byte", sizeof(c));
    printf("\nSize of sizeof(sint)  => %d Bytes", sizeof(sint));
    printf("\nSize of sizeof(dint)  => %d Bytes", sizeof(dint));
    printf("\nSize of sizeof(lint)  => %d Bytes", sizeof(lint));
    printf("\nSize of sizeof(llint) => %d Bytes", sizeof(llint));
    printf("\nSize of sizeof(flt)   => %d Bytes", sizeof(flt));
    printf("\nSize of sizeof(dbl)   => %d Bytes", sizeof(dbl));
    printf("\nSize of sizeof(ldbl)  => %d Bytes", sizeof(ldbl));

    // Use of sizeof(expression)
    printf("\n\n>>>>>>>>>> Use of sizeof(expression) <<<<<<<<<<<<<<");
    printf("\nSize of sizeof('a')     => %d Byte", sizeof('a'));
    printf("\nSize of sizeof(4 + 8)   => %d Bytes", sizeof(4 + 8));
    printf("\nSize of sizeof(2.4 + 8) => %d Bytes", sizeof(4.5 + 8));

    getch();
    return 0;
}
// Main Function End
