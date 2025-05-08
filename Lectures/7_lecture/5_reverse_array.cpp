#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1; // two pointers approach

    while (start < end) // swap is a function
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    system("chcp 65001");

    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;

    reverseArray(arr, size);

    cout << "Reversed Array---->\n";
    for (int i = 0; i < size; i++)
    {
        cout << fg::green << arr[i] << " ";
    }
    cout << endl;

    return 0;
}