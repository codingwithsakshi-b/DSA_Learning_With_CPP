#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

// WAF FOR A NUMBER IS PRIME OR NOT---------

void isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << fg::red << "Not Prime" << endl;
            return;
        }
    }
    cout << fg::green << "\n"
         << n << " is a Prime Number." << endl;
}

int main()
{
    system("chcp 65001");

    isPrime(3);

    return 0;
}