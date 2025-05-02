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

    cout << fg::magenta << "--------PYRAMID 🔼 PATTERN------------" << endl;

    int n;
    cout << fg::yellow << "Enter a number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 0; j < i + 1; j++)
        {
            cout << j+1;
        }

        // Print decreasing numbers
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}