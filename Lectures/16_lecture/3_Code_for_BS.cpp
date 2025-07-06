#define _WIN32_WINNT 0x0600
#include <iostream>
#include <vector>
#include "rang.hpp"

using namespace std;
using namespace rang;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    system("chcp 65001");

    vector<int> array = {-1, 0, 3, 4, 5, 9, 12}; // odd size array
    int tar1 = 12;
    cout << fg::green << "index of target 12 = " << binarySearch(array, tar1) << endl;

    vector<int> array2 = {-1, 0, 3, 5, 9, 12}; // even size array
    int tar2 = 0;
    cout << fg::green << "index of target 0 = " << binarySearch(array2, tar2) << endl;

    int tar3 = 9;
    cout << fg::green << "index of target 9 = " << binarySearch(array2, tar3) << endl;
    return 0;
}