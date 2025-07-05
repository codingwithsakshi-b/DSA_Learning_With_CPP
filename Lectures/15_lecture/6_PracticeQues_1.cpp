#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;



int main()
{
    system("chcp 65001");
   
    // question 1 - Predict Output 
    // you have to predict the output then re match to output section
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout<<fg::blue<<"\nPointers Question Practice\n"<<endl;

    cout<<fg::green << *p << endl;//ans = 5
    cout << **q << endl;// ans = 5
    cout << p << endl;// ans = address of a 
    cout << *q << endl;// ans = address of a
    return 0;
}