#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

int main()
{
    system("chcp 65001");

    int a = 10;
    int *ptr = &a;

    cout << fg::green << ptr << endl;

    // INCREMENT OPERATOR
    ptr++;
    cout << fg::blue << ptr << endl;

    // DECREMENT OPERATOR
    ptr--;
    cout << fg::green << ptr << endl;

    // adding in pointer
    ptr = ptr + 3;
    cout << fg::yellow << ptr << endl;

    // Adding in arrays
    int arr[] = {1, 2, 3, 4, 5};

    cout << fg::red << *arr << endl;       // output = 1
    cout << fg::red << *(arr + 1) << endl; // output = 2
    cout << fg::red << *(arr + 2) << endl; // output = 3
    cout << fg::red << *(arr + 3) << endl; // output = 4
    cout << fg::red << *(arr + 4) << endl; // output = 5

    // POINTER TO POINTER ARITHMETIC
    // WE CAN ONLY SUBTRACT IF BOTH POINTER HAVE SAME DATA TYPE

    int p = 100;
    int q = 200;

    int *pointer = &p;
    int *pointer2 = &q;

    cout << pointer << endl;                        // 0x61fee8
    cout << pointer2 << endl;                       // 0x61fee4
    cout << fg::cyan << pointer - pointer2 << endl; // 1

    int *pt;
    int *p2 = pt + 3;

    cout << p2 - pt << endl; // 3

    // RELATIONAL POINTER OPERATOR
    //<,>,==,!=,<=,>=

    int *P;
    int *Q;

    cout << fg::magenta << P << endl;
    cout << fg::magenta << Q << endl;

    cout << fg::green << (P < Q) << endl; 

    // if we assign some equal values
    int *r;
    int *s = r;

    cout << fg::magenta << (r == s) << endl;//1
    cout << fg::magenta << (r >= s) << endl;//1

    return 0;
}