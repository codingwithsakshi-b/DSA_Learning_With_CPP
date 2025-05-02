#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

// function for sum of 2 numbers
int Sum(int a, int b)
{
    int sum = a + b;
    cout << fg::green << "Sum of " << a << " and " << b << " is " << sum << endl;

    return sum;
}

// function for minimum of 2 numbers
int minNums(int a, int b) // here we say a and be is our parameters
{
    if (a < b)
    {
        cout << "Minimum of given numbers is " << a << endl;
    }
    else
    {
        cout << fg::green << "Minimum of given numbers is " << b << endl;
    }
    return (a < b) ? a : b;
}

int main()
{
    system("chcp 65001");

    Sum(4, 5);           // function call for sum
    //and here 1000,2000 are arguments
    minNums(1000, 2000); // function call of minimum of numbers

    return 0;
}