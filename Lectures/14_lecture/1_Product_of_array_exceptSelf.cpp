#define _WIN32_WINNT 0x0600
#include <iostream>
#include <vector>
#include "rang.hpp"

using namespace std;
using namespace rang;

// using divide operator
vector<int> productAES(vector<int> nums)
{
    vector<int> ans(nums.size());
    int prod = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        prod *= nums[i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = prod / nums[i];
    }
    return ans;
}
// now we use some other approaches
// without using divide operator
// 1.Brute Force Approach
//  Time Complexity = O(n^2)
vector<int> productExceptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> result(n, 1);

    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod *= nums[j];
            }
        }
        result[i] = prod;
    }
    return result;
}

// more Optimal Approach
// Time Complexity = O(n)
// Space Complexity = O(n)
// after this code we optimise the space complexity too
// there are so many approaches to do a single question
//  as we go through array approach too but vector approach is better so we do by this

vector<int> productExceptItself(vector<int> nums)
{
    int n = nums.size();
    vector<int> Result(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        Result[i] = prefix[i] * suffix[i];
    }
    return Result;
}
// more Optimal approach in terms of space complexity
// As in Previous Space complexity = O(n)
// but in this approach the space complexity = O(1)

vector<int> productExceptitself(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    
    //as we directly multiply to ans vector 
    //don't have need to store it
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }
    return ans;
}

int main()
{
    system("chcp 65001");
    vector<int> number = {1, 2, 3, 4};

    // by using divide operator
    cout << fg::cyan << "\nBy Using Divide Operator----\n";

    vector<int> ans = productAES(number);

    for (int i : ans)
    {
        cout << fg::green << i << " ";
    }
    cout << endl;
    // without using divide operator
    // Brute force approach
    cout << fg::cyan << "\nWithout using Divide Operator\nBRUTE FORCE APPROACH\n";

    vector<int> result = productExceptSelf(number);
    for (int i : result)
    {
        cout << fg::green << i << " ";
    }
    cout << endl;

    // Optimal approach
    // time complexity = O(n)
    // space complexity = O(n)
    cout << fg::cyan << "\nOptimal Approach\nTC = O(n)\nSC = O(n)\n";

    vector<int> Ans = productExceptItself(number);

    for (int i : Ans)
    {
        cout << fg::green << i << " ";
    }
    cout << endl;

    //more optimal approach in terms of space complexity
    //space complexity = o(1);
    //time complexity = o(n);

    cout << fg::cyan << "\nmore Optimal Approach\nTC = O(n)\nSC = O(1)\n";

    vector<int> Answer = productExceptitself(number);

    for (int i : Answer)
    {
        cout << fg::green << i << " ";
    }
    cout << endl;

    return 0;
}