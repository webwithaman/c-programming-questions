// // Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition. using the switch Statement.
// // For the first 50 units Rs. 0.50/unit
// // For the next 100 units Rs. 0.75/unit
// // For the next 100 units Rs. 1.20/unit
// // For units above 250 Rs. 1.50/unit
// // An additional surcharge of 20% is added to the bill.

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{

    float units, billAmount = 0;
    printf("\nEnter Consumed Electricity Units => ");
    scanf("%f", &units);

    // // 1st Approach
    switch (units >= 50)
    {
    case 1:
        billAmount += 50 * 0.50;
        units -= 50;

        switch (units >= 100)
        {
        case 1:
            billAmount += 100 * 0.75;
            units -= 100;

            switch (units >= 100)
            {
            case 1:
                billAmount += 100 * 1.20;
                units -= 100;

                switch (units > 0)
                {
                case 1:
                    billAmount += units * 1.50;
                }
                break;

            case 0:
                billAmount += units * 1.20;
            }
            break;
        case 0:
            billAmount += units * 0.75;
        }
        break;

    case 0:
        billAmount += units * 0.50;
    }

    // // Add Additional surcharge of 20% is added to the bill.
    billAmount += .2 * billAmount;

    // // 2nd Approach
    // // switch (units >= 50)
    // // {
    // // case 1:
    // //    switch (units <= 150)
    // //    {
    // //    case 1:
    // //        billAmount += 25 + (units - 50) * .75;
    // //        break;
    // //    case 0:
    // //        switch (units <= 250)
    // //        {
    // //        case 1:
    // //            billAmount += 100 + (units - 150) * 1.20;
    // //            break;
    // //        case 0:
    // //            billAmount += 220 + (units - 250) * 1.50;
    // //        }
    // //        break;
    // //    }
    // //    break;
    // // case 0:
    // //    billAmount += units * .50;
    // // }

    // // Add Additional surcharge of 20% is added to the bill.
    // // billAmount += .2 * billAmount;

    printf("\nTotoal Bill Amount => %f", billAmount);

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
