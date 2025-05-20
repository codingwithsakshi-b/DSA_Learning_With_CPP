#define _WIN32_WINNT 0x0600
#include <iostream>
#include <vector>
#include "rang.hpp"

using namespace std;
using namespace rang;

int mooresVotingAlgo(vector<int> nums)
{
    int n = nums.size(), freq = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    system("chcp 65001");

    vector<int> nums = {1, 2, 2, 1, 1, 2, 2};//output: 2

    cout << fg::green << "Majority Element = " << mooresVotingAlgo(nums) << endl;

    return 0;
}