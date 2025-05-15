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

    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    //for each loops
    for (char val : vec)
    {
        cout << fg::green << val << endl;
    }

    return 0;
}