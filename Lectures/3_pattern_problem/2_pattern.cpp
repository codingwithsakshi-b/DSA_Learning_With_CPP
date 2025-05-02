#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

void showBanner()
{
    cout << style::italic << fg::yellow
         << "\n========================================\n"
         << "         🚀 Welcome to C++ World! 🚀\n"
         << "========================================\n"
         << style::reset << endl;
}

int main()
{
    system("chcp 65001");
    showBanner();

    cout << fg::magenta << "\n-----🟩 Square pattern---------" << endl;

    int n;
    cout << fg::yellow << "Enter a Number: ";
    cin >> n;

    // outer loop
    for (int i = 1; i <= n; i++)
    {   //inner loop
        for (int j = 1; j <= n; j++)
        {
            cout << fg::green << j<<" ";
        }
        cout << endl;
    }

    return 0;
}