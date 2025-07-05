#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

int main()
{
    system("chcp 65001");

    cout << fg::red << "\nPredict Output -" << endl;

    int arr[] = {10, 20, 30, 40};

    int *ptr = arr;

    cout << fg::green << *(ptr + 1) << endl; // output = 20
    cout << *(ptr + 3) << endl;              // output = 40

    ptr++;
    cout << *ptr << endl; // output = 20
    return 0;
}