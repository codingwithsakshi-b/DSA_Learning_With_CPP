#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

//-----vector header file-----
#include <vector>

using namespace std;
using namespace rang;

int main()
{
    system("chcp 65001");

    // vector syntax vector < data type > vector variable
    vector<int> vec = {1, 2, 3};
    cout << fg::green << vec[0] << endl;

    // empty vector
    // vector<int> vector;

    // intializing a vector with same data at different index
    // vector <int> vec(vector size, vector element)
    vector<int> vector(5, 9); // vector size=5, vector element = 9
    cout << fg::magenta << vector[3] << endl; // output= 9.

    return 0;
}