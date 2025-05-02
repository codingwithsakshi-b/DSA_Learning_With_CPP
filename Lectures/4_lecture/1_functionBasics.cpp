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

//function make
void printHello(){
    cout<<"Hello World!"<<endl;
}//void is a return type means it return nothing

int main() //int is also a return type it return some integer value and here it returns 0.
{
    system("chcp 65001");
    showBanner();

    cout << fg::magenta << "\nFUNCTIONS" << endl;
    //function call/invoke;
    printHello();
    //it prints hello when we call it

    return 0;
}