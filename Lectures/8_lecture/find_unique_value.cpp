#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

//-----vector header file-----
#include <vector>

using namespace std;
using namespace rang;

int main()
{
    system("chcp 65001");

    vector<int> vec = {2, 10, 2, 5, 5, 6, 6};

    // solution--->
    int ans = 0;
    for (int val : vec)
    {
        ans = ans ^ val;
    }
    cout << fg::green << "Unique value in vector = " << ans;

    return 0;
}