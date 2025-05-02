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
    cout << fg::yellow << "Enter a Number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // int m = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << fg::green << j + 1 << " ";//insted of j+1 we can print out m too!
            // m++;
        }
        cout << endl;
    }

    return 0;
}