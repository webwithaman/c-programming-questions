#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 2, 5}; // lengths of triangle
    int n = sizeof(arr) / sizeof(arr[0]);
    int length1 = arr[0];
    int length2 = arr[1];
    int length3 = arr[2];

    sort(arr, arr + n);

    if (length1 * length2 * length3 != 0 && length1 == length2 || length2 == length3 || length3 == length1)
        printf("\nYes, Entered Lengths Are Valid For An Isosceles Triangle...");
    else
        printf("\nNo, Entered Lengths Are Not Valid For An Isosceles Triangle...");

    return 0;
}