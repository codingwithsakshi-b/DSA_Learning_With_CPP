#define _WIN32_WINNT 0x0600
#include <iostream>
#include <vector>
#include "rang.hpp"

using namespace std;
using namespace rang;

// this is optimal solution
// time complexity O(N)
// only for sorted array in ascending order
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;

    int n = nums.size();
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];

        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    system("chcp 65001");

    vector<int> num = {2, 7, 11, 15, 18};
    int target = 25;

    vector<int> ans = pairSum(num, target);

    cout << fg::cyan << "INDEXED OF THE PAIR ARE\na." << ans[0] << "\nb." << ans[1] << endl;

    return 0;
}