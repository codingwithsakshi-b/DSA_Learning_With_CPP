#define _WIN32_WINNT 0x0600
#include <iostream>
#include <vector>
#include "rang.hpp"

using namespace std;
using namespace rang;

int searchInRotatedSortedArray(vector<int> arr, int target)
{
    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[st] <= arr[mid])
        {
            if (arr[st] <= target && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && target <= arr[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    system("chcp 65001");

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // 🔁 Rotated sorted array
    int target = 0;                           // 🎯 Target to find

    // 🔍 Call search function
    int result = searchInRotatedSortedArray(nums, target);

    // 🖨️ Output result
    if (result != -1)
    {
        cout << fg::green << "\nTarget found at index: " << result << endl;
    }
    else
    {
        cout << fg::red << "\nTarget not found." << endl;
    }
    return 0;
}