// PROGRAM TO CREATE ARRAY AND PERFORM OPERATIONS ON IT

// HEADER FILES
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>

/************************* FUNCTIONS DECLARATIONS ****************************/

int choice();
float *allocateMemory(int);
float *reallocateMemory(float *, int);
void getElements(float *, int);
int displayElements(float *, int);
int copyArray(float *, float *, int);
int deleteFirstElement(float *, int);
int deleteLastElement(float *, int);
int deleteElementAtIndex(float *, int, int);
int deleteMultipleElements(float *, int, int, int);
int rotateBy1ToLeft(float *, int);
int rotateByNToLeft(float *, int, int);
int rotateBy1ToRight(float *, int);
int rotateByNToRight(float *, int, int);
int linearSearch(float *, int, float);
int binarySearch(float *, int, float);
float findLargestElement(float *, int);
float findSmallestElement(float *, int);
float find2ndLargestElement(float *, int);
float find2ndSmallestElement(float *, int);
float findNthLargestElement(float *, int, int);
float findNthSmallestElement(float *, int, int);
int sortInAscendingBySelectionSort(float *, int);
int sortInDescendingBySelectionSort(float *, int);
int sortInAscendingByBubbleSort(float *, int);
int sortInDescendingByBubbleSort(float *, int);
int sortInAscendingByInsertionSort(float *, int);
int sortInDescendingByInsertionSort(float *, int);
int sortInAscendingByMySort(float *, int);
int sortInDescendingByMySort(float *, int);
int insertElementAtStart(float **, int, float);
int insertElementAtEnd(float **, int, float);
int insertElementAtIndex(float **, int, float, int);
int insertMultipleElements(float **, int, float *, int, int);
int firstAdjacentDuplicateElement(float *, int);
int lastAdjacentDuplicateElement(float *, int);
int countFrequencyOfElement(float *, int, float);
int totalDuplicateElements(float *, int);
int totalUniqueElements(float *, int);
void printDuplicateElements(float *, int);
void printUniqueElements(float *, int);
int moveAllNsAtStart(float *, int, float);
int moveAllNsAtEnd(float *, int, float);
int findFirstUniqueElement(float *, int);
int findLastUniqueElement(float *, int);
int findFirstDuplicateElement(float *, int);
int findLastDuplicateElement(float *, int);
double sumOfAllElements(float *, int);

// Global Variables
float *ptr = NULL;
int size = 0;

int main()
{

    while (1)
    {

        system("cls");

        switch (choice())
        {

        case 0:
            free(ptr);
            exit(0);

        case 1:
            printf("\nHow Many Elements You Want To Enter => ");
            scanf("%d", &size);
            ptr = allocateMemory(size);
            if (!ptr)
            {
                puts("\n!!! Something Went Wrong...");
                size = 0;
                break;
            }
            else
            {
                printf("\n>>>>>>>>> Enter %d Elements <<<<<<<<<<\n", size);
                getElements(ptr, size);
            }
            break;

        case 2:
            printf("\n>>>>>>>>>>> Total %d Elements <<<<<<<<<<<<<<\n\n", size);
            if (!displayElements(ptr, size))
                printf("\n!!! Array is Empty...");
            break;

        case 3:
            if (deleteFirstElement(ptr, size))
                puts("\n>>>>>>>> First Element Deleted Successfully... <<<<<<<<");
            else
                puts("\n!!! Array is Empty....");
            break;

        case 4:
            if (deleteLastElement(ptr, size))
                puts("\n>>>>>>>> Last Element Deleted Successfully... <<<<<<<<");

            else
                puts("\n!!! Array is Empty....");
            break;

        case 5:
        {
            int index;
            printf("Enter Index of Element Which Want to Delete => ");
            scanf("%d", &index);
            int response = deleteElementAtIndex(ptr, size, index);
            if (response == 1)
                puts("\n>>>>>>>> Element Deleted Successfully... <<<<<<<<");
            else if (response < 0)
                puts("\n!!! Invalid Index...");
            else
                puts("\n!!! Array is Empty....");
        }
        break;

        case 6:
        {
            int index, numberOfElements;
            printf("Enter Index From Which You Want to Start Deletion of Elements  => ");
            scanf("%d", &index);
            printf("How Many Elements You Want to Delete => ");
            scanf("%d", &numberOfElements);
            int response = deleteMultipleElements(ptr, size, index, numberOfElements);
            if (response == 1)
                puts("\n>>>>>>>> Elements Deleted Successfully... <<<<<<<<");
            else if (response == -1)
                puts("\n!!! Invalid Index...");
            else if (response == 0)
                puts("\n!!! Array is Empty....");
            else
                puts("\n!!! Invalid Number of Elements");
        }
        break;

        case 7:
            if (rotateBy1ToLeft(ptr, size))
                puts("\n>>>>>>>> Elements Rotated Successfully... <<<<<<<<");
            else
                puts("\n!!! Array is Empty....");
            break;

        case 8:
        {
            int position;
            printf("Enter Position By Which You Want to Rotate Elements => ");
            scanf("%d", &position);
            int response = rotateByNToLeft(ptr, size, position);
            if (response == 1)
                puts("\n>>>>>>>> Elements Rotated Successfully... <<<<<<<<");
            else if (response < 0)
                puts("\n!!! Invalid Position...");
            else
                puts("\n!!! Array is Empty....");
        }
        break;

        case 9:
            if (rotateBy1ToRight(ptr, size))
                puts("\n>>>>>>>> Elements Rotated Successfully... <<<<<<<<");
            else
                puts("\n!!! Array is Empty....");
            break;

        case 10:
        {
            int position;
            printf("Enter Position By Which You Want to Rotate Elements => ");
            scanf("%d", &position);
            int response = rotateByNToRight(ptr, size, position);
            if (response == 1)
                puts("\n>>>>>>>> Elements Rotated Successfully... <<<<<<<<");
            else if (response < 0)
                puts("\n!!! Invalid Position...");
            else
                puts("\n!!! Array is Empty....");
        }
        break;

        case 11:
        {
            float element;
            printf("Enter Element Which You Want to Search => ");
            scanf("%f", &element);
            int response = binarySearch(ptr, size, element);
            if (response >= 0)
                printf("\nElement Found At Index => %d", response);
            else if (response == -1)
                puts("\n!!! Element Not Found....");
            else
                puts("\n!!! Array is Empty....");
        }
        break;

        case 12:
            printf("Largest Element => %.2f", findLargestElement(ptr, size));
            break;

        case 13:
            printf("Smalllest Element => %.2f", findSmallestElement(ptr, size));
            break;

        case 14:
            printf("2nd Largest Element => %.2f", find2ndLargestElement(ptr, size));
            break;

        case 15:
            printf("2nd Smalllest Element => %.2f", find2ndSmallestElement(ptr, size));
            break;

        case 16:
        {
            int NthLargest;
            printf("Enter Nth Largest Element You Want To Find => ");
            scanf("%d", &NthLargest);
            printf("%dth Largest Element => %.2f", NthLargest, findNthLargestElement(ptr, size, NthLargest));
        }
        break;

        case 17:
        {
            int NthSmallest;
            printf("Enter Nth Smallest Element You Want To Find => ");
            scanf("%d", &NthSmallest);
            printf("%dth Smalllest Element => %.2f", NthSmallest, findNthSmallestElement(ptr, size, NthSmallest));
            break;
        }

        case 18:
            if (sortInAscendingByMySort(ptr, size))
                puts("\n>>>>>>>> Elements Successfull Sorted In Ascending Order... <<<<<<<<");
            else
                puts("\n!!! Array is Empty....");
            break;

        case 19:
            if (sortInDescendingByMySort(ptr, size))
                puts("\n>>>>>>>> Elements Successfully Sorted In Descending Order... <<<<<<<<");
            else
                puts("\n!!! Array is Empty....");
            break;

        case 20:
        {
            float newElement;
            printf("Enter Number that You Want To Insert => ");
            scanf("%f", &newElement);
            if (insertElementAtStart(&ptr, size, newElement))
            {
                puts("\n>>>>>>>> Element Successfully Inserted... <<<<<<<<");
            }
            else
                puts("\n!!! Something Went Wrong...");
        }
        break;

        case 21:
        {
            float newElement;
            printf("Enter Number that You Want To Insert => ");
            scanf("%f", &newElement);
            if (insertElementAtEnd(&ptr, size, newElement))
            {
                puts("\n>>>>>>>> Element Successfully Inserted... <<<<<<<<");
            }
            else
                puts("\n!!! Something Went Wrong...");
        }
        break;

        case 22:
        {
            float newElement;
            int index;
            printf("Enter Number that You Want To Insert => ");
            scanf("%f", &newElement);
            printf("Enter Index At You Want To Add => ");
            scanf("%d", &index);
            if (insertElementAtIndex(&ptr, size, newElement, index))
            {

                puts("\n>>>>>>>> Element Successfully Inserted... <<<<<<<<");
            }
            else
                puts("\n!!! Something Went Wrong...");
        }
        break;

        case 23:
        {
            int index, n;
            printf("Enter Index From Where You Want To Start Insertion of Elements => ");
            scanf("%d", &index);
            printf("How Many New Elements You Want To Insert => ");
            scanf("%d", &n);
            if (n <= 0)
            {
                puts("!!! Invalid...");
                break;
            }
            float newElements[n];
            printf("Enter Number that You Want To Insert => ");
            for (int i = 0; i < n; i++)
                scanf("%f", newElements + i);
            if (insertMultipleElements(&ptr, size, newElements, n, index))
            {

                puts("\n>>>>>>>> Elements Successfully Inserted... <<<<<<<<");
            }
            else
                puts("\n!!! Something Went Wrong...");
        }
        break;

        case 24:
        {
            int response = firstAdjacentDuplicateElement(ptr, size);
            if (response >= 0)
            {
                printf("\n>>>>>>>> First Pair of Ajacent Duplicate Element At Index => %d <<<<<<<<", response);
            }
            else if (response == -1)
                puts("\n!!! No Ajacent Duplicate Element");
            else
                puts("\n!!! Array is Empty....");
        }
        break;

        case 25:
        {
            int response = lastAdjacentDuplicateElement(ptr, size);
            if (response >= 0)
            {
                printf("\n>>>>>>>> Last Pair of Ajacent Duplicate Element At Index => %d <<<<<<<<", response);
            }
            else if (response == -1)
                puts("\n!!! No Ajacent Duplicate Element");
            else
                puts("\n!!! Array is Empty....");
        }
        break;

        case 26:
        {
            float element;
            printf("Enter Element To Count Frequency => ");
            scanf("%f", &element);
            printf("Frequency of %.2f => %d", element, countFrequencyOfElement(ptr, size, element));
        }
        break;

        case 27:
            printf("Total Number of Duplicate Elements => %d", totalDuplicateElements(ptr, size));
            break;

        case 28:
            printf("Total Number of Unique Elements => %d", totalUniqueElements(ptr, size));
            break;
        case 29:
        {
            puts("\n>>>>>>>> All Duplicate Elements <<<<<<<<");
            printDuplicateElements(ptr, size);
        }
        break;

        case 30:
        {
            puts("\n>>>>>>>> All Unique Elements <<<<<<<<");
            printUniqueElements(ptr, size);
        }
        break;

        case 31:
        {
            float element;
            printf("Enter Element Which You Want To  Move At Start => ");
            scanf("%f", &element);
            if (moveAllNsAtStart(ptr, size, element))
                puts("\n>>>>>>>>>>>> Elements Successfully Moved At Starting <<<<<<<<<<<<");
            else
                puts("!!! Element Not Found...");
        }
        break;

        case 32:
        {
            float element;
            printf("Enter Element Which You Want To  Move At End => ");
            scanf("%f", &element);
            if (moveAllNsAtEnd(ptr, size, element))
                puts("\n>>>>>>>>>>>> Elements Successfully Moved At End <<<<<<<<<<<<");
            else
                puts("!!! Element Not Found...");
        }
        break;

        case 33:
        {
            int index = findFirstUniqueElement(ptr, size);
            if (index >= 0)
                printf("\nFirst Unique Element => %.2f", ptr[index]);
            else
                printf("!!! No Any Unique Element Found...");
        }
        break;

        case 34:
        {
            int index = findLastUniqueElement(ptr, size);
            if (index >= 0)
                printf("\nLast Unique Element => %.2f", ptr[index]);
            else
                printf("!!! No Any Unique Element Found...");
        }
        break;

        case 35:
        {
            int index = findFirstDuplicateElement(ptr, size);
            if (index >= 0)
                printf("\nFirst Duplicate Element => %.2f", ptr[index]);
            else
                printf("!!! No Any Duplicate Element Found...");
        }
        break;

        case 36:
        {
            int index = findLastDuplicateElement(ptr, size);
            if (index >= 0)
                printf("\nLast Duplicate Element => %.2f", ptr[index]);
            else
                printf("!!! No Any Duplicate Element Found...");
        }
        break;

        case 37:
            printf("Sum of All Elements => %.2lf", sumOfAllElements(ptr, size));
            break;

        default:
            puts("\nInvalid choice !!!\n");
        }

        getch();
        fflush(stdin);
    }

    return 0;
}

/************************* FUNCTIONS DEFINITIONS ****************************/

//  Function to Get User's Choice
int choice()
{
    int choice;
    puts("\n\n>>>>>>>>>> ARRAY WITH ALL OPERATIONS <<<<<<<<<");
    puts("........................................");
    puts("Press 0   : Exit ");
    puts("Press 1   : Enter Elements");
    puts("Press 2   : Display All Elements");
    puts("Press 3   : Delete First Element");
    puts("Press 4   : Delete last Element");
    puts("Press 5   : Delete Element At Specific Index");
    puts("Press 6   : Delete Multiple Elements");
    puts("Press 7   : Rotate Elements By 1 Position To Left");
    puts("Press 8   : Rotate Elements By N Position To Left");
    puts("Press 9   : Rotate Elements By 1 Position To Right");
    puts("Press 10  : Rotate Elements By N Position To Right");
    puts("Press 11  : Search Element");
    puts("Press 12  : Find Largest Element");
    puts("Press 13  : Find Smallest Element");
    puts("Press 14  : Find 2nd Largest Element");
    puts("Press 15  : Find 2nd Smallest Element");
    puts("Press 16  : Find Nth Largest Element");
    puts("Press 17  : Find Nth Smallest Element");
    puts("Press 18  : Sort Elements In Ascending Order");
    puts("Press 19  : Sort Elements In Descending Order");
    puts("Press 20  : Insert New Element At Starting");
    puts("Press 21  : Insert New Element At End");
    puts("Press 22  : Insert New Element At Specific Index");
    puts("Press 23  : Insert Mutiple New Elements");
    puts("Press 24  : Find First Pair of Adjacent Duplicate Element");
    puts("Press 25  : Find Last Pair of Adjacent Duplicate Element");
    puts("Press 26  : Count Frequency of An Element");
    puts("Press 27  : Count Total Number of Duplicate Elements");
    puts("Press 28  : Count Total Number of Unique Elements");
    puts("Press 29  : Print All Duplicate Elements");
    puts("Press 30  : Print All Unique Elements");
    puts("Press 31  : Move All Duplicates of An Element At Start");
    puts("Press 32  : Move All Duplicates of An Element At End");
    puts("Press 33  : Find First Unique Element");
    puts("Press 34  : Find Last Unique Element");
    puts("Press 35  : Find First Duplicate Element");
    puts("Press 36  : Find Last Duplicate Element");
    puts("Press 37  : Find Sum of All Element");
    puts("........................................\n");
    printf("Enter Your Choice => ");
    scanf("%d", &choice);
    putch('\n');
    return choice;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Create An Array <<<<<<<<<<<<<<<<<<<<<<<<<
float *allocateMemory(int n)
{
    {
        extern float *ptr;
        free(ptr);
    }
    float *ptr;
    ptr = (float *)calloc(n, sizeof(float));
    return ptr;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Reallocate Memory <<<<<<<<<<<<<<<<<<<<<<<<<
float *reallocateMemory(float *ptr, int n)
{
    ptr = (float *)realloc(ptr, sizeof(float) * n);
    return ptr;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Get Elements <<<<<<<<<<<<<<<<<<<<<<<<<
void getElements(float *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter Element  %d. => ", i + 1);
        scanf("%f", &ptr[i]);
        fflush(stdin);
    }
}

// >>>>>>>>>>>>>>>>>>>>> Function to Display All Elements <<<<<<<<<<<<<<<<<<<<<<<<<
int displayElements(float *ptr, int size)
{
    if (size == 0)
        return 0;
    for (int i = 0; i < size; i++)
        printf("Element %d. => %.2f \n", i + 1, ptr[i]);
    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Copy Array <<<<<<<<<<<<<<<<<<<<<<<<<

int copyArray(float *destination, float *source, int size)
{
    if (size <= 0)
        return 0;
    for (int i = 0; i < size; i++)
        destination[i] = source[i];
    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Delete First Element <<<<<<<<<<<<<<<<<<<<<<<<<
int deleteFirstElement(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    rotateBy1ToLeft(ptr, size);
    {
        extern int size;
        size--;
    }
    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Delete Last Element <<<<<<<<<<<<<<<<<<<<<<<<<
int deleteLastElement(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    {
        extern int size;
        size--;
    }
    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Delete Element At Index <<<<<<<<<<<<<<<<<<<<<<<<<

int deleteElementAtIndex(float *ptr, int size, int index)
{
    if (size <= 0)
        return 0;
    if (index < 0 || index > size - 1)
        return -1;
    for (int i = index; i < size - 1; i++)
        ptr[i] = ptr[i + 1];
    {
        extern int size;
        size--;
    }
    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Delete Multiple Elements <<<<<<<<<<<<<<<<<<<<<<<<<

int deleteMultipleElements(float *ptr, int size, int index, int howManyElements)
{
    if (size <= 0)
        return 0;
    if (index < 0 || index > size - 1)
        return -1;
    if (howManyElements <= 0 || howManyElements > size - index)
        return -99;
    for (int i = index + howManyElements; i < size; i++)
        ptr[i - howManyElements] = ptr[i];
    {
        extern int size;
        size -= howManyElements;
    }
    return 1;
}

// >>>>>>>>>>>>>>>>>>>>>>> Functions to Rotate Elements by 1 Position To Left <<<<<<<<<<<<<<<<<<<<<
// By Move Element Backward Logic
int rotateBy1ToLeft(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int temp = ptr[0];
    for (int i = 0; i < size - 1; i++)
        ptr[i] = ptr[i + 1];
    ptr[size - 1] = temp;
    return 1;
}

// By Swapping Logic
// int rotateBy1ToLeft(float *ptr, int size)
// {
//     if (size <= 0)
//         return 0;
//     for (int i = size - 2; i >= 0; i--)
//     {
//         int temp = ptr[size - 1];
//         ptr[size - 1] = ptr[i];
//         ptr[i] = temp;
//     }
//     return 1;
// }

// >>>>>>>>>>>>>>>>>>>>>>> Functions to Rotate Elements by N Position To Left <<<<<<<<<<<<<<<<<<<<<

// By Move Backward Logic
int rotateByNToLeft(float *ptr, int size, int position)
{
    if (size <= 0)
        return 0;
    if (position <= 0 || position > size)
        return -1;
    float temp[position];
    for (int i = 0; i < position; i++)
        temp[i] = ptr[i];
    for (int i = position; i < size; i++)
        ptr[i - position] = ptr[i];
    for (int i = position; i > 0; i--)
        ptr[size - i] = temp[position - i];
    return 1;
}

// By Swapping Logic
// int rotateByNToLeft(float *ptr, int size, int position)
// {
//     if (position < 0 || position > size || !size)
//         return 0;
//     while (position--)
//         rotateBy1ToLeft(ptr, size);
//     return 1;
// }

// >>>>>>>>>>>>>>>>>>>>>>> Functions to Rotate Elements by 1 Position To Right <<<<<<<<<<<<<<<<<<<<<
// By Move Backward Logic
int rotateBy1ToRight(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int temp = ptr[size - 1];
    for (int i = size - 2; i >= 0; i--)
        ptr[i + 1] = ptr[i];
    ptr[0] = temp;
    return 1;
}

// By Swapping Logic
// int rotateBy1ToRight(float *ptr, int size)
// {
//     if (size <= 0)
//         return 0;
//     int temp;
//     for (int i = 1; i < size; i++)
//     {
//         temp = ptr[0];
//         ptr[0] = ptr[i];
//         ptr[i] = temp;
//     }
//     return 1;
// }

// >>>>>>>>>>>>>>>>>>>>>>> Functions to Rotate Elements by N Position To Right <<<<<<<<<<<<<<<<<<<<<

// Function to Rotate Elements to Right by N Position by Rotate Logic
int rotateByNToRight(float *ptr, int size, int position)
{
    if (size <= 0)
        return 0;
    if (position <= 0 || position > size)
        return -1;
    float temp[position];
    for (int i = 0; i < position; i++)
        temp[i] = ptr[size - 1 - i];
    for (int i = size - 1; i >= position; i--)
        ptr[i] = ptr[i - position];
    for (int i = 0; i < position; i++)
        ptr[position - 1 - i] = temp[i];
    return 1;
}

// Function to Rotate Elements to Right by N Position by Swapping Logic
// int rotateByNToRight(float *ptr, int size, int position)
// {
//     if (position < 0 || position > size || !size)
//         return 0;
//     while (position--)
//         rotateBy1ToRight(ptr, size);
//     return 1;

// >>>>>>>>>>>>>>>>>>>>>>> Functions For Search Element <<<<<<<<<<<<<<<<<<<<<

// Linear Search
int linearSearch(float *ptr, int size, float element)
{
    for (int i = 0; i < size; i++)
        if (ptr[i] == element)
            return i;
    return -1;
}

// Binary Search
int binarySearch(float *ptr, int size, float element)
{

    sortInAscendingBySelectionSort(ptr, size);

    int start = 0, end = size - 1, mid = (start + end) / 2;

    while (start <= end && ptr[mid] != element)
    {
        if (element < ptr[mid])
            end = mid - 1;
        else
            start = mid + 1;
        mid = (start + end) / 2;
    }
    if (start > end)
        return -1;
    return mid;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Find Largest Element <<<<<<<<<<<<<<<<<<<<<<<<<
float findLargestElement(float *ptr, int size)
{
    if (size <= 0)
        return 0;

    float largest = ptr[0];
    for (int i = 1; i < size; i++)
        if (ptr[i] > largest)
            largest = ptr[i];
    return largest;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Find Smallest Element <<<<<<<<<<<<<<<<<<<<<<<<<

float findSmallestElement(float *ptr, int size)
{
    if (size <= 0)
        return 0;

    float smallest = ptr[0];
    for (int i = 1; i < size; i++)
        if (ptr[i] < smallest)
            smallest = ptr[i];
    return smallest;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Find 2nd Largest Element <<<<<<<<<<<<<<<<<<<<<<<<<
float find2ndLargestElement(float *ptr, int size)
{
    float largest = ptr[0], secondLargest = ptr[0];
    for (int i = 1; i < size; i++)
    {
        if (ptr[i] > largest)
        {
            secondLargest = largest;
            largest = ptr[i];
        }
        else if (ptr[i] > secondLargest)
            secondLargest = ptr[i];
    }
    return secondLargest;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Find 2nd Largest Element <<<<<<<<<<<<<<<<<<<<<<<<<
float find2ndSmallestElement(float *ptr, int size)
{
    float smallest = ptr[0], secondSmallest = ptr[0];
    for (int i = 1; i < size; i++)
    {
        if (ptr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = ptr[i];
        }
        else if (ptr[i] < secondSmallest)
            secondSmallest = ptr[i];
    }
    return secondSmallest;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Find Nth Largest Element <<<<<<<<<<<<<<<<<<<<<<<<<

float findNthLargestElement(float *ptr, int size, int NthLargest)
{
    if (size <= 0)
        return 0;
    float copiedArray[size];
    copyArray(copiedArray, ptr, size);
    sortInDescendingByBubbleSort(copiedArray, size);
    return copiedArray[NthLargest - 1];
}

// >>>>>>>>>>>>>>>>>>>>> Function to Find Nth Smallest Element <<<<<<<<<<<<<<<<<<<<<<<<<

float findNthSmallestElement(float *ptr, int size, int NthSmallest)
{
    if (size <= 0)
        return 0;
    float copiedArray[size];
    copyArray(copiedArray, ptr, size);
    sortInAscendingByBubbleSort(copiedArray, size);
    return copiedArray[NthSmallest - 1];
}

// >>>>>>>>>>>>>>>>>>>>>>>  Functions For Sorting <<<<<<<<<<<<<<<<<<<<<

// Selection Sort
int sortInAscendingBySelectionSort(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int temp;
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
}

// Selection Sort
int sortInDescendingBySelectionSort(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int temp;
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (ptr[i] < ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
}

// Bubble Sort
int sortInAscendingByBubbleSort(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int temp;
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (ptr[j] > ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
}

// Bubble Sort

int sortInDescendingByBubbleSort(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int temp;
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (ptr[j] < ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
}

// Insertion Sort
int sortInAscendingByInsertionSort(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int temp;
    for (int i = 1; i < size; i++)
    {
        for (int j = i; ptr[j] < ptr[j - 1] && j > 0; j--)
        {
            temp = ptr[j];
            ptr[j] = ptr[j - 1];
            ptr[j - 1] = temp;
        }
    }
}

// Insertion Sort

int sortInDescendingByInsertionSort(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int temp;
    for (int i = 1; i < size; i++)
    {
        for (int j = i; ptr[j] > ptr[j - 1] && j > 0; j--)
        {
            temp = ptr[j];
            ptr[j] = ptr[j - 1];
            ptr[j - 1] = temp;
        }
    }
}

// My Sort
int sortInAscendingByMySort(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int index, temp, j;
    float largest;
    for (int i = 0; i < size - 1; i++)
    {
        index = 0;
        largest = ptr[0];
        for (j = 1; j < size - i; j++)
        {
            if (ptr[j] > largest)
            {
                largest = ptr[j];
                index = j;
            }
        }
        temp = ptr[j - 1];
        ptr[j - 1] = ptr[index];
        ptr[index] = temp;
    }
}

// My Sort

int sortInDescendingByMySort(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    int index, temp, j;
    float smallest;
    for (int i = 0; i < size - 1; i++)
    {
        index = 0;
        smallest = ptr[0];
        for (j = 1; j < size - i; j++)
        {
            if (ptr[j] < smallest)
            {
                smallest = ptr[j];
                index = j;
            }
        }
        temp = ptr[j - 1];
        ptr[j - 1] = ptr[index];
        ptr[index] = temp;
    }
}

// >>>>>>>>>>>>>>>>>>>>> Function to Insert Element At Start <<<<<<<<<<<<<<<<<<<<<<<<<

int insertElementAtStart(float **ptr, int size, float newElement)
{
    if (size < 0)
        size = 0;

    {
        extern int size;
        *ptr = reallocateMemory(*ptr, ++size);
        if (*ptr == NULL)
            return 0;
    }

    size++;

    for (int i = size - 1; i > 0; i--)
    {
        printf("\n%d = %d\n", i, i - 1);
        (*ptr)[i] = (*ptr)[i - 1];
    }
    (*ptr)[0] = newElement;

    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Insert Element At End <<<<<<<<<<<<<<<<<<<<<<<<<

int insertElementAtEnd(float **ptr, int size, float newElement)
{
    if (size < 0)
        size = 0;
    {
        extern int size;
        *ptr = reallocateMemory(*ptr, ++size);
        if (*ptr == NULL)
            return 0;
    }
    size++;

    (*ptr)[size - 1] = newElement;
    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Insert Element At Index <<<<<<<<<<<<<<<<<<<<<<<<<

int insertElementAtIndex(float **ptr, int size, float newElement, int index)
{
    if (size < 0 && index > 0 || index > size)
        return 0;
    {
        extern int size;
        *ptr = reallocateMemory(*ptr, ++size);
        if (*ptr == NULL)
            return 0;
    }
    size++;

    for (int i = size - 1; i > index; i--)
        (*ptr)[i] = (*ptr)[i - 1];
    (*ptr)[index] = newElement;
    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Insert Multiple Elements <<<<<<<<<<<<<<<<<<<<<<<<<

int insertMultipleElements(float **ptr, int size, float *newElements, int n, int index)
{

    if (size < 0)
        size = 0;
    if (index < 0 || index > size)
        return 0;

    {
        extern int size;
        size += n;
        *ptr = reallocateMemory(*ptr, size);
    }
    size += n;
    for (int i = size - 1; i > index + 1; i--)
        (*ptr)[i] = (*ptr)[i - n];
    for (int i = 0; i < n; i++)
        (*ptr)[index + i] = newElements[i];

    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Find First Ajacent Duplicate Element <<<<<<<<<<<<<<<<<<<<<<<<<

int firstAdjacentDuplicateElement(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    for (int i = 0; ptr + i < ptr + size - 1; i++)
        if (ptr[i] == ptr[i + 1])
            return i;

    return -1;
}

// >>>>>>>>>>>>>>>>>>>>> Function to Find Last Ajacent Duplicate Element <<<<<<<<<<<<<<<<<<<<<<<<<

int lastAdjacentDuplicateElement(float *ptr, int size)
{
    if (size <= 0)
        return 0;
    float save = -1;
    int i, index;
    for (i = 0; ptr + i < ptr + size - 1; i++)
        if (ptr[i] == ptr[i + 1])
        {
            save = ptr[i];
            index = i;
        }
    if (save != -1)
        return index;

    return -1;
}

// >>>>>>>>>>>>>>>>>>>>> Functions to Count Frequency of An Element <<<<<<<<<<<<<<<<<<<<<<<<<

// By Comparing Logic
int countFrequencyOfElement(float *ptr, int size, float element)
{
    int frequency = 0;
    int index = linearSearch(ptr, size, element);
    if (index == -1)
        return 0;
    frequency++;
    for (int i = index + 1; i < size; i++)
    {
        if (ptr[i] == element)
            frequency++;
    }
    return frequency;
}

// By Sorting Logic
// int countFrequencyOfElement(float *ptr, int size, float element)
// {
//     int frequency = 0;
//     int index = linearSearch(ptr, size, element);
//     if (index == -1)
//         return 0;
//     frequency++;
//     float copiedArray[size];
//     copyArray(copiedArray, ptr, size);
//     for (int i = index + 1; i < size; i++)
//         if (ptr[i] == element)
//             frequency++;
//     return frequency;
// }

// >>>>>>>>>>>>>>>>>>>>> Functions to Find Total Number of Duplicate Elements <<<<<<<<<<<<<<<<<<<<<<<<<

// By Comparing with Each logic
int totalDuplicateElements(float *ptr, int size)
{
    int duplicate = 0;
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (ptr[i] == ptr[j])
            {
                duplicate++;
                break;
            }
    return duplicate;
}

// By Comparing With Each logic With No Break

// int totalDuplicateElements(float *ptr, int size)
// {
//     float save[size / 2];
//     int count = 0, duplicate = 0;
//     for (int i = 0; i < size -1; i++)
//     {
//         if (linearSearch(save, count, ptr[i]) == -1)
//         {
//             int response = countFrequencyOfElement(ptr, size, ptr[i]);
//             if (response > 1)
//             {
//                 duplicate += --response;
//                 save[count] = ptr[i];
//                 count++;
//             }
//         }
//     }
//     return duplicate;
// }

// By Comparing Sorting logic
// int totalDuplicateElements(float *ptr, int size)
// {
//     float copiedArray[size];
//     copyArray(copiedArray, ptr, size);
//     sortInAscendingByBubbleSort(copiedArray, size);
//     int duplicate = 0, j;
//     for (int i = 0; i < size - 1; i = j)
//         for (j = i + 1; copiedArray[i] == copiedArray[j] && j < size ; j++, duplicate++)
//             ;
//     return duplicate;
// }

// >>>>>>>>>>>>>>>>>>>>> Functions to Find Total Number of Unique Elements <<<<<<<<<<<<<<<<<<<<<<<<<

// By Comparing Sorting logic
int totalUniqueElements(float *ptr, int size)
{

    float copiedArray[size];
    copyArray(copiedArray, ptr, size);
    sortInAscendingByBubbleSort(copiedArray, size);
    int unique = 0, j;
    for (int i = 0; i < size; i++)
    {
        if (copiedArray[i] != copiedArray[i + 1] && copiedArray[i] != copiedArray[i - 1])
            unique++;
    }
    return unique;
}

// By Comparing With Each logic With No Break
// int totalUniqueElements(float *ptr, int size)
// {
//     float save[size / 2];
//     int count = 0, unique = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (linearSearch(save, count, ptr[i]) == -1)
//         {
//             int response = countFrequencyOfElement(ptr, size, ptr[i]);
//             if (response == 1)
//             {
//                 unique++;
//                 save[count] = ptr[i];
//                 count++;
//             }
//         }
//     }
//     return unique;
// }

// >>>>>>>>>>>>>>>>>>> Function ot Print All Duplicate Elements <<<<<<<<<<<<<<<<<<<<<<<

// By Check Frequency of Element
// void printDuplicateElements(float *ptr, int size)
// {
//     float save[size / 2];
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (linearSearch(save, count, ptr[i]) == -1)
//         {
//             int frequency = countFrequencyOfElement(ptr, size, ptr[i]);
//             if (frequency > 1)
//             {
//                 printf("%.2f\n", ptr[i]);
//                 save[count] = ptr[i];
//                 count++;
//             }
//         }
//     }
// }

// By Sorting Logic
void printDuplicateElements(float *ptr, int size)
{
    float copiedArray[size];
    copyArray(copiedArray, ptr, size);
    sortInAscendingByBubbleSort(copiedArray, size);
    int j;

    for (int i = 0; i < size - 1; i = j)
    {
        for (j = i + 1; ptr[i] == ptr[j] && j < size; j++)
            ;
        if (i + 1 != j)
            printf("%.2f\n", ptr[i]);
    }
}

// >>>>>>>>>>>>>>>>>>> Function ot Print All Unique Elements <<<<<<<<<<<<<<<<<<<<<<<

// By Check Frequency of Element
// void printUniqueElements(float *ptr, int size)
// {
//     float save[size / 2];
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (linearSearch(save, count, ptr[i]) == -1)
//         {
//             int frequency = countFrequencyOfElement(ptr, size, ptr[i]);
//             if (frequency == 1)
//                 printf("%.2f\n", ptr[i]);
//             else if (frequency > 1)
//             {
//                 save[count] = ptr[i];
//                 count++;
//             }
//         }
//     }
// }

// By Sorting Logic
void printUniqueElements(float *ptr, int size)
{
    float copiedArray[size];
    copyArray(copiedArray, ptr, size);
    sortInAscendingByBubbleSort(copiedArray, size);
    for (int i = 0; i < size; i++)
        if (copiedArray[i] != copiedArray[i + 1] && copiedArray[i] != copiedArray[i - 1])
            printf("%.2f\n", copiedArray[i]);
}

// >>>>>>>>>>>>>>>>>>>>> Functions to Move All Duplicates of An Element At Start <<<<<<<<<<<<<<<<<<<<<<<<<

int moveAllNsAtStart(float *ptr, int size, float element)
{
    int frequency = countFrequencyOfElement(ptr, size, element);
    int index;

    if (frequency == size)
        return 1;

    if (frequency > 0)
        index = linearSearch(ptr, size, element);
    else
        return 0;

    if (frequency == 1)
    {
        ptr[index] = ptr[0];
        ptr[0] = element;
        return 1;
    }

    int count = 0;
    ptr[index] = ptr[count];
    ptr[count] = element;
    count++;
    for (int i = size - 1; i >= count; i--)
    {
        if (ptr[i] == element)
        {
            ptr[i] = ptr[count];
            ptr[count] = element;
            count++;
        }
    }
    return 1;
}

// >>>>>>>>>>>>>>>>>>>>> Functions to Move All Duplicates of An Element At Start <<<<<<<<<<<<<<<<<<<<<<<<<

int moveAllNsAtEnd(float *ptr, int size, float element)
{
    int frequency = countFrequencyOfElement(ptr, size, element);
    int index;

    if (frequency == size)
        return 1;

    if (frequency > 0)
        index = linearSearch(ptr, size, element);
    else
        return 0;

    if (frequency == 1)
    {
        ptr[index] = ptr[size - 1];
        ptr[size - 1] = element;
        return 1;
    }

    int count = size - 1;
    ptr[index] = ptr[count];
    ptr[count] = element;
    count--;
    for (int i = index + 1; i <= count; i++)
    {
        if (ptr[i] == element)
        {
            ptr[i] = ptr[count];
            ptr[count] = element;
            count--;
        }
    }
    return 1;
}
int findFirstUniqueElement(float *ptr, int size)
{
    int frequency;
    for (int i = 0; i < size; i++)
    {
        frequency = countFrequencyOfElement(ptr, size, ptr[i]);
        if (frequency == 1)
            return i;
    }
    return -1;
}

int findLastUniqueElement(float *ptr, int size)
{
    int frequency;
    for (int i = size - 1; i >= 0; i--)
    {
        frequency = countFrequencyOfElement(ptr, size, ptr[i]);
        if (frequency == 1)
            return i;
    }
    return -1;
}
int findFirstDuplicateElement(float *ptr, int size)
{
    int frequency;
    for (int i = 0; i < size; i++)
    {
        frequency = countFrequencyOfElement(ptr, size, ptr[i]);
        if (frequency > 1)
            return i;
    }
    return -1;
}

int findLastDuplicateElement(float *ptr, int size)
{
    int frequency;
    for (int i = size - 1; i >= 0; i--)
    {
        frequency = countFrequencyOfElement(ptr, size, ptr[i]);
        if (frequency > 1)
            return i;
    }
    return -1;
}

double sumOfAllElements(float *ptr, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += ptr[i];

    return sum;
}
