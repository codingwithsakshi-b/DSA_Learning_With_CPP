#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void print_Prime(int n)
{
    cout << "\nPrime Numbers til " << n << endl;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i) == true)
        {
            cout << fg::green << i << endl;
        }
    }
    cout << fg::blue << "---------loop ends---------" << endl;
}

int main()
{
    system("chcp 65001");

    print_Prime(10);

    return 0;
}