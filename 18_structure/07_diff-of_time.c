// Write a program to calculate the difference between two time periods. Take Time in  24-Hour Format.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

// Define Structure
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

// Functions Declarations (Prototypes)
void inputTime(struct Time *);
void displayTime(struct Time);
int validateTime(struct Time);
struct Time diffBetTime(struct Time, struct Time);

// Main Function Start
int main()
{
    // create variable of structure Time
    struct Time t1, t2, diff;

    // Input Time Periods
    printf("\n>>>>>> Enter First Time Period in 24-Hour <<<<<<<\n");
    inputTime(&t1);

    printf("\n>>>>>> Enter Second Time Period in 24-Hour <<<<<<<\n");
    inputTime(&t2);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function to Input Time data
void inputTime(struct Time *time)
{
    printf("\nEnter Hours => ");
    scanf("%d", &time->hours);

    printf("\nEnter Minutes => ");
    scanf("%d", &time->minutes);

    printf("\nEnter Seconds => ");
    scanf("%d", &time->seconds);
}

// Function to Display Time data
void displayTime(struct Time time)
{
    puts("\n==========");
    printf("\n%d:%d:%d", time.hours, time.minutes, time.seconds);
    puts("\n==========");
}

struct Time diffBetTime(struct Time t1, struct Time t2)
{
}

// Function to Find Difference Between Two Time Periods
int validateTime(struct Time)
{
}
