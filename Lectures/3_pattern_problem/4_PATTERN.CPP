#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

void showBanner()
{
    cout << style::italic << fg::cyan
         << "\n========================================\n"
         << "         🚀 Welcome to C++ World! 🚀\n"
         << "========================================\n"
         << style::reset << endl;
}

int main()
{
    system("chcp 65001");
    showBanner();

    cout << fg::magenta << "=====print numbers in pattern====" << endl;

    int n;
    cout << fg::yellow << "Enter a Number: ";
    cin >> n;

    int m= 1;

    for (int i = 0; i < n; i++)//outer loop
    {
        for (int j = 0; j < n; j++)//inner loop
        {
            cout << fg::green << m << " ";
            m++;
        }
        cout << endl;
    }

    return 0;
}
