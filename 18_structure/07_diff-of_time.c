// Write a program to calculate the difference between two time periods. Take Time in  24-Hour Format.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

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

// // Main Function Start
int main()
{
    // create variable of structure Time
    struct Time t1, t2, diff;

    // Input Time Period 2
    printf("\n>>>>>> Enter First Time Period in 24-Hour <<<<<<<\n");
    inputTime(&t1);

    // Validate Time Period
    if (!validateTime(t1))
    {
        puts("\n!!! Invalid Time Period, Plz Enter valid Time Period...\n");
        exit(0);
    }

    // Input Time Period 2
    printf("\n>>>>>> Enter Second Time Period in 24-Hour <<<<<<<\n");
    inputTime(&t2);

    // Validate Time Period
    if (!validateTime(t1))
    {
        puts("\n!!! Invalid Time Period, Plz Enter valid Time Period...\n");
        exit(0);
    }

    // Display Difference Time Period 1
    printf("\n>>>>>>> Time Period 1 <<<<<<<<\n");
    displayTime(t1);

    // Display Difference Time Period 2
    printf("\n>>>>>>> Time Period 2 <<<<<<<<\n");
    displayTime(t2);

    // Find Difference Between Two Time Periods
    diff = diffBetTime(t1, t2);

    // Display Difference Between Two Time Periods
    printf("\n>>>>>>> Difference Between Time Period 1 and Time Period 2 <<<<<<<<\n");
    displayTime(diff);

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
    printf("%d:%d:%d", time.hours, time.minutes, time.seconds);
    puts("\n==========");
}

// Function to Validate Time Period
int validateTime(struct Time time)
{
    if (time.hours < 0 || time.hours > 23 || time.minutes < 0 || time.minutes > 59 || time.seconds < 0 || time.seconds > 59)
        return 0; // Time Period is Invalid

    return 1; // Time Period is valid
}

// Function to Find Difference Between Two Time Periods
struct Time diffBetTime(struct Time t1, struct Time t2)
{
    struct Time diff;

    // Difference Between Seconds
    if (t1.seconds < t2.seconds)
    {
        t1.seconds += 60;
        t1.minutes = t1.minutes ? t1.minutes - 1 : 59;
    }
    diff.seconds = abs(t1.seconds - t2.seconds);

    // Difference Between Minutes
    if (t1.minutes < t2.minutes)
    {
        t1.minutes += 60;
        t1.hours = t1.hours ? t1.hours - 1 : 11;
    }
    diff.minutes = abs(t1.minutes - t2.minutes);

    // Difference Between Hours
    diff.hours = abs(t1.hours - t2.hours);

    return diff; // return difference
}
