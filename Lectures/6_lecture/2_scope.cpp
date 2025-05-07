#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

void var()
{
    char college = 'hello world';
}

int s = 5;
char letter = 'hello';

// variables -- s, letter are global variables;

int main() // variables -- college,x,r,i,name,y are local variable
{
    cout << s;
    if (3 > 2)
    {
        int x = 3;
    }
    else
    {
        int r = 2;
    }
    for (int i = 1; i > 0; i++)
    {
        char name = 'sakshi';
    }

    {
        int y = 4;
    }

    return 0;
}