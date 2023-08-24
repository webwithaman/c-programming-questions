// C Program to Print Following Pattern

/*


  *****     *****
 *******   *******
********* *********
****WebWithAman****
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *

*/

// Header files
#include <stdio.h>
#include <conio.h>
#include <string.h>

// Main Function Start
int main()
{

    char name[20];
    printf("\nEnter Your Name =>");
    fgets(name, 20, stdin);

    puts("\n----------------------------------------------------------------------\n");

    int lengthOfName = strlen(name);
    name[--lengthOfName] = '\0'; // Remove New Line Character '\n' from the End of String

    for (int i = 1; i <= 13; i++)
    {
        for (int j = 1; j <= 19; j++)
        {

            if (i <= 3)
            {
                if (j >= 4 - i && j <= 6 + i || j >= 14 - i && j <= 16 + i)
                    printf("*");
                else
                    putch(32);
            }
            else if (i == 4)
            {

                if (j <= (19 - lengthOfName) / 2 || j >= 19 - (19 - lengthOfName) / 2 + (lengthOfName & 1 ? 1 : 0))
                    printf("*");
                else
                {
                    printf("%s", name);
                    j += lengthOfName - 1;
                }
            }
            else
            {
                if (j >= i - 3 && j <= 19 - (i - 4))
                    printf("*");
                else
                    printf(" ");
            }
        }
        putch('\n');
    }


    // Fixed With Name

    // for (int i = 1; i <= 13; i++)
    // {
    //     for (int j = 1; j <= 19; j++)
    //     {

    //         if (i <= 3)
    //         {
    //             if (j >= 4 - i && j <= 6 + i || j >= 14 - i && j <= 16 + i)
    //                 printf("*");
    //             else
    //                 putch(32);
    //         }
    //         else if (i == 4)
    //         {
    //             if (j <= 4 || j >= 16)
    //                 printf("*");
    //             else
    //             {
    //                 printf("WebWithAman");
    //                 j += 10;
    //             }
    //         }
    //         else
    //         {
    //             if (j >= i - 3 && j <= 19 - (i - 4))
    //                 printf("*");
    //             else
    //                 printf(" ");
    //         }
    //     }
    //     putch('\n');
    // }

    getch();
    return 0;
}
// Main Function End
