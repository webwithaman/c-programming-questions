// C Program to Find Position of First 1 When Searching From LSB to MSB


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int num, position;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);

    if (num)
    {
        while (!(num & 1))
        {
            position++;
            num >>= 1;
        }

        printf("\nPosition of First 1 In Binary of %d => %d ", num, position);
    }
    else
        printf("\nThere is No 1 in the Binary of %d ", num);


    getch();
    return 0;
}
// Main Function End
