#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

// WAF TO CALCULATE SUM OF ALL NUMBERS IN AN ARRAY---->
int SumofArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// WAF TO CALCULATE PRODUCT OF ALL NUMBERS IN AN ARRAY---->
int prodOfArray(int arr[], int size)
{
    int prod = 1;

    for (int i = 0; i < size; i++)
    {
        prod *= arr[i];
    }
    return prod;
}

// WAF TO SWAP THE MAX & MIN NUMBER OF AN ARRAY---->
void swapMaxMin(int arr[], int size)
{
    int minidx = 0, maxidx = 0, smallest = INT32_MAX, largest = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
            minidx = i;
        }
        if (largest < arr[i])
        {
            largest = arr[i];
            maxidx = i;
        }
    }
    swap(arr[minidx], arr[maxidx]);
}

// WAF TO PRINT ALL THE UNIQUE VALUES IN AN ARRAY-->
void uniqueValues(int arr[], int size)
{
    cout << fg::cyan << "\nUnique Elements===>";

    for (int i = 0; i < size; i++)
    {
        bool isunique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isunique = false;
                break;
            }
        }
        if (isunique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// WAF TO PRINT INTERSECTION OF 2 ARRAYS
void printIntersection(int arr1[], int sz1, int arr2[], int sz2)
{
    cout << fg::green << "\nIntersection of arrays = ";

    for (int i = 0; i < sz1; i++)
    {
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++)
        {
            if (arr1[i] == arr2[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = 0; j < sz2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    system("chcp 65001");

    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;

    cout << fg::green << "Sum of all numbers in Array = " << SumofArray(arr, size);

    swapMaxMin(arr, size);

    cout << fg::magenta << "\nArray after swapping max min values-->\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}