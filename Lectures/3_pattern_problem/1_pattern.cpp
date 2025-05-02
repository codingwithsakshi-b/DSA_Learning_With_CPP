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

    cout << fg::magenta << "\n🌟 Print m number of * in n numbers of line---->" << endl;

    int n;
    cout << fg::yellow << "Enter Number of lines: ";
    cin >> n;

    int k;
    cout << fg::red << "⭐ Enter Number of stars(*): ";
    cin >> k;

    for (int i = 0; i < n; i++)
    {

        int m = k;
        for (int j = 0; j < m; j++)
        {
            cout << fg::green << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}