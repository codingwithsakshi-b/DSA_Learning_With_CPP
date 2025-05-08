#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

int linearSearch(int arr[], int size)
{

    int target;
    cout << fg::yellow << "Enter a value for search in a array: ";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    system("chcp 65001");

    int array[] = {23, 44, 55, 65, 77, 89, 100, 47, 55};

    int val = linearSearch(array, 9);

    if (val != -1)
    {
        cout << fg::green << "Your target value is founded! at index = " << val << endl;
    }
    else
    {
        cout << fg::red << "Your target value not founded!";
    }
    return 0;
}