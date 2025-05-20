#define _WIN32_WINNT 0x0600
#include <iostream>
#include <vector>
#include "rang.hpp"

using namespace std;
using namespace rang;

//brute force approach
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    system("chcp 65001");

    vector<int> vec = {1, 2, 5, -9, 3, 8};
    int target = -2;

    vector<int> ans = pairSum(vec, target);

    return 0;
}