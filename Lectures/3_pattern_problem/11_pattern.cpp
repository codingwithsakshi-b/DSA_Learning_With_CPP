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

    cout << fg::magenta << "----Floyd's Triangle Pattern-----" << endl;

    int n;
    cout << fg::yellow << "Enter a Number: ";
    cin >> n;

    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << fg::green << num << " ";
            num++;
        }
        cout << endl;
        
    }

    return 0;
}