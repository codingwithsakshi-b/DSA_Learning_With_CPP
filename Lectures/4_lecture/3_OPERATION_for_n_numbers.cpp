#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

//----------SUM OF N NATURAL NUMBER------------
int Sum(int n)
{

    int count = 0;

    for (int i = 0; i < n + 1; i++)
    {
        count += i;
    }
    cout << fg::green << "\nSum of " << n << " Natural numbers is " << count << endl;
}

//----------FACTORIAL OF N-----------------

int fact(int n)
{
    int fac = 1;

    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}

//----------SUM OF DIGIT OF N--------------

int sumDigit(int n)
{
    int org_n = n;
    int sum = 0;
    while (n > 0)
    {
        int a = n % 10;
        sum += a;
        n /= 10;
    }
    cout << "Total digit sum of " << org_n << " = " << sum << endl;
}

//------------CALCULATING nCr VALUE------------

int nCr(int n, int r)
{
    int val = fact(n) / (fact(r) * fact(n - r));

    cout << "nCr val of n=" << n << ", r=" << r << " is " << val << endl;
}

//--------------MAIN FUNCTION--------------

int main()
{
    system("chcp 65001");

    int n; // we can ask user
    cout << fg::yellow << "\nEnter a number: ";
    cin >> n;

    Sum(n); // function call

    fact(n); // function call for factorial

    sumDigit(145); // 1+4+5=10

    nCr(8, 2); // output 28

    return 0;
}