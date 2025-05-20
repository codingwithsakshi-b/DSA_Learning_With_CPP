#define _WIN32_WINNT 0x0600
#include <iostream>
#include <vector>
#include "rang.hpp"

using namespace std;
using namespace rang;

// by brute force approach
// time complexity = O(N^2)
int majorityElement(vector<int> nums)
{

    int n = nums.size();

    for (int val : nums)
    {
        int freq = 0;
        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
    return 0;
}

// by using sorting
int MEusingSorting(vector<int> nums)
{

    sort(nums.begin(), nums.end());

    int freq = 1, n = nums.size();
    int ans = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return nums[i];
        }
    }
    return 0;
}

int main()
{
    system("chcp 65001");

    vector<int> nums = {1, 1, 2, 2, 2, 2, 1};

    cout << fg::magenta << "\nMajority Element in the array = " << MEusingSorting(nums) << endl;

    cout << fg::magenta << "\nMajority Element in the array = " << majorityElement(nums) << endl;

    cout << "\n";
    return 0;
}