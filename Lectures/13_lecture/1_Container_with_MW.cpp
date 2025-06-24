#define _WIN32_WINNT 0x0600
#include <iostream>
#include <vector>
#include "rang.hpp"

using namespace std;
using namespace rang;

// by brute force approach
// Time Complexity = O(n^2)
int MaxWater(vector<int> Height)
{
    int max_Water = 0;

    for (int i = 0; i < Height.size(); i++)
    {
        for (int j = 0; j < Height.size(); j++)
        {
            int w = j - i;
            int ht = min(Height[i], Height[j]);

            int curr_Water = w * ht;

            max_Water = max(curr_Water, max_Water);
        }
    }
    return max_Water;
}

// optimal approach
// TWO POINTER APPROACH
// Time Complexity = O(n)

int maxWater(vector<int> Height)
{
    int lp = 0;
    int rp = Height.size() - 1;
    int max_water = 0;

    while (lp < rp)
    {
        int w = rp - lp;
        int h = min(Height[lp], Height[rp]);
        int curr_water = w * h;
        max_water = max(max_water, curr_water);

        Height[lp] < Height[rp] ? lp++ : rp--;
    }
    return max_water;
}

int main()
{
    system("chcp 65001");
    vector<int> HEIGHT = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    // by brute force approach;
    cout << fg::cyan << "\nBy Brute Force Approach" << endl;
    cout << fg::green << "Maximum Water = " << MaxWater(HEIGHT) << endl<<"\n";
    cout << fg::cyan << "\nBy TWO POINTER APPROACH" << endl;
    cout << fg::green << "Maximum Water = " << maxWater(HEIGHT) << endl<<"\n";

    return 0;
}