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

    

    return 0;
}