#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

// double getOnlyRealNumber();
// double stringToDouble(char *);

// long long int getOnlyInteger();
// long long int stringToInt(char *);

int main()
{
    // Get Only Real Number
    // printf("Enter A Number => ");
    // printf("\nEntered Number %lf", getOnlyRealNumber());

    // Get Only Integer
    // printf("Enter A Number => ");
    // printf("\nEntered Number %lld", getOnlyInteger());

    getch();
    return 0;
}

// double getOnlyRealNumber()
// {
//     char str[30];
//     int i = 0;
//     while (1)
//     {
//         char ch = getch();
//         if (ch == ' ' || ch == 13)
//             break;
//         else if ((ch >= '0' && ch <= '9' || ch == '.') || ch == '-' && i == 0)
//         {
//             putch(ch);
//             str[i] = ch;
//             i++;
//         }
//         else if (ch == 8 && i > 0)
//         {
//             i--;
//             putch('\b');
//             putch(' ');
//             putch('\b');
//         }
//     }
//     str[i] = 0;
//     return stringToDouble(str);
// }

// double stringToDouble(char *str)
// {
//     long long int integeralPart = 0, decimalPart = 0;
//     int i = 0;
//     if (str[0] == '-')
//         i = 1;
//     for (; str[i] != '.' && str[i]; i++)
//         integeralPart = integeralPart * 10 + (str[i] - 48);

//     if (strlen(str) != i)
//     {
//         for (i++; str[i]; i++)
//             decimalPart = decimalPart * 10 + (str[i] - 48);
//     }

//     int countDigits = 0, copyDecimalPart = decimalPart;
//     while (copyDecimalPart > 0)
//     {
//         countDigits++;
//         copyDecimalPart /= 10;
//     }
//     double digitsAfterPoint = 0;
//     if (countDigits)
//         digitsAfterPoint = decimalPart / pow(10, countDigits);
// 
//     double num = integeralPart;
//     num += digitsAfterPoint;
//     if (str[0] == '-')
//         num = -num;
//     return num;
// }

// long long int getOnlyInteger()
// {
//     char str[30];
//     int i = 0;
//     while (1)
//     {
//         char ch = getch();
//         if (ch == ' ' || ch == 13)
//             break;
//         else if (ch >= '0' && ch <= '9' || ch == '-' && i == 0)
//         {
//             putch(ch);
//             str[i] = ch;
//             i++;
//         }
//         else if (ch == 8 && i > 0)
//         {
//             i--;
//             putch('\b');
//             putch(' ');
//             putch('\b');
//         }
//     }
//     str[i] = 0;
//     return (stringToInt(str));
// }

// long long int stringToInt(char *str)
// {
//     long long int integeralPart = 0;
//     int i = 0;
//     if (str[0] == '-')
//         i = 1;
//     for (; str[i]; i++)
//         integeralPart = integeralPart * 10 + (str[i] - 48);

//     if (str[0] == '-')
//         integeralPart = -integeralPart;
//     return integeralPart;
// }