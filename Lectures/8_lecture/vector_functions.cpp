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

    vector<int> vec = {100, 200, 300};
    cout << fg::green << "\n🌟 CAPACITY OF VECTOR in STARTING= " << vec.capacity() << endl;

    cout << fg::cyan << "\n🌟 VALUES BEFORE PUSH BACK-->\n";
    for (int i : vec)
    {
        cout << "🔹" << i << endl;
    }

    // 1.size function
    cout << fg::green << "\n🌟 Size of vector= " << vec.size() << endl;

    // 2.push_back function
    vec.push_back(400);
    vec.push_back(500);
    vec.push_back(600);
    vec.push_back(700);

    // as we can check size too
    cout << fg::magenta << "🌟 Size after push back= " << vec.size() << endl;

    cout << fg::cyan << "\n🌟 VALUES AFTER PUSH BACK-->\n";
    for (int i : vec)
    {
        cout << "🔹" << i << endl;
    }

    // 3.pop_back function
    vec.pop_back(); // delete the last item in a vector
    cout << fg::magenta << "\n🌟 Size after pop back= " << vec.size() << endl;

    cout << fg::cyan << "🌟 VALUES AFTER POP BACK-->\n";
    for (int i : vec)
    {
        cout << "🔹" << i << endl;
    }

    // 4.front function
    cout << fg::cyan << "\n🌟 First element in vector= " << fg::yellow << vec.front() << endl;

    // 5.back function
    cout << fg::cyan << "\n🌟 last element in vector= " << fg::yellow << vec.back() << endl;

    // 6.at function
    cout << fg::magenta << "\n🌟 element at index " << 3 << " = " << vec.at(3) << endl;

    // 7.capacity function
    cout << fg::green << "\n🌟 CAPACITY OF VECTOR= " << vec.capacity() << endl;

    return 0;
}