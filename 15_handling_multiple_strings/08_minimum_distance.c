// Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1)

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// Main Function Start
int main()
{
    const int ROWS = 8;
    char words[8][MAX_COLS] = {
        "apple",
        "kiwi",
        "banana",
        "kiwi",
        "apple",
        "date",
        "apple",
        "banana"};

    char word1[MAX_COLS], word2[MAX_COLS];
    int index1 = -1, index2 = -1, minDis = ROWS - 1;

    // Display List of Words
    printf("\n>>>>>>>>>>>>> List of Words <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(words[i]);

    // Read Two Words
    printf("\n>>> Enter Two Words From the List to Find Minimum Distance Between <<<<<<<<\n");
    printf("\nEnter Word-1 (MAX CHARACTERS %d) => ", MAX_COLS - 1);
    fflush(stdin);
    fgets(word1, MAX_COLS, stdin);
    word1[strcspn(word1, "\n")] = '\0';
    printf("\nEnter Word-2 (MAX CHARACTERS %d) => ", MAX_COLS - 1);
    fflush(stdin);
    fgets(word2, MAX_COLS, stdin);
    word2[strcspn(word2, "\n")] = '\0';

    // Find Minimum Distance
    for (int i = 0; i < ROWS; i++)
    {
        if (strcmp(word1, words[i]) == 0)
            index1 = i;

        if (strcmp(word2, words[i]) == 0)
            index2 = i;

        if (index1 != -1 && index2 != -1 && index1 <= index2)
        {
            if (index2 - index1 < minDis)
                minDis = index2 - index1;
        }
    }

    if (index1 != -1 && index2 != -1)
        printf("\nMinimum Distance Between \"%s\" and \"%s\" => %d", word1, word2, minDis);
    else
        printf("\n\"%s\" Or \"%s\" not Present in the List of words", word1, word2);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
