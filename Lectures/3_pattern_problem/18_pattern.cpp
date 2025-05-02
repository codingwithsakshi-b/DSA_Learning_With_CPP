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

    cout << fg::magenta << "easy with numbers----------->" << endl;

    int n;
    cout << fg::yellow << "Enter a number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            char ch = 'A' + j;
            cout << ch;
        }
        for (int j = i; j > 0; j--)
        {
            char ch = 'A' + j - 1;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}