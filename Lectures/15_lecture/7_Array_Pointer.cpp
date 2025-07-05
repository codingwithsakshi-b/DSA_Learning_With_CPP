#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

int main()
{
    system("chcp 65001");

    int arr[] = {1, 2, 3, 4, 5};

    cout << fg::blue << arr << endl; // print out address of arr in memory

    cout << fg::green << *arr << endl; // print the first element of array means, output=1.

    // * arr in called Array Pointer , and it is constant we can't change.

    //NORMAL POINTERS
    int a = 10;
    int * ptr = &a;

    int b = 5;
    ptr = &b; //CAN CHANGE VALUE

    //ARRAY POINTER = CONSTANT POINTER
    //CAN'T CHANGE

    //arr = &a; //this will give an error 

    return 0;
}