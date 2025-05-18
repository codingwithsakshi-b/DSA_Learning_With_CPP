#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

void printSubarray(int arr[], int n)
{

    cout << fg::magenta << "\nSubarrays are :-\n";

    // for starting index
    for (int st = 0; st < n; st++)
    {
        // for last index
        for (int end = st; end < n; end++)
        {
            // for printing subarrays
            for (int i = st; i <= end; i++)
            {
                cout << fg::green << arr[i] << ",";
            }
            cout << " ";
        }
        cout << endl;
    }
}

// by brute force approach
int maxSubarraySum(int arr[], int n)
{
    // for starting index
    int maxSum = INT32_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        // for last index
        for (int end = st; end < n; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    return maxSum;
}

// BY KDANE'S ALGORITHM APPROACH
// LEETCODE Q.NO 53
int maxKdaneSum(int arr[], int n)
{
    int maxSum = INT32_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    system("chcp 65001");

    int arr[] = {0, 4, 5, 2, -4, -5, 4, -3, 3, -4, 5, 4, -1, 7, -8};
    int n = 15;
    
    // for printing subarrays--->
    printSubarray(arr, n);

    // for MAXIMUM SUBARRAY SUM BY BRUTE FORCE APPROACH--->
    cout << fg::cyan << "\nMaximum sum = " << maxSubarraySum(arr, n) << endl;

    // for MAXIMUM SUBARRAY SUM BY KDANE'S ALGORITHM--->
    cout << fg::cyan << "\nMaximum sum = " << maxKdaneSum(arr, n) << endl;

    return 0;
}