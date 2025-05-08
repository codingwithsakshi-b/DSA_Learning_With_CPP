#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

int main()
{
    system("chcp 65001");

    // creating array
    int marks[5] = {99, 67, 44, 33, 92};

    double price[] = {99.66, 55.77, 66.00};

    // getting  a value from array
    cout << fg::green << "Marks at index 0 = " << marks[0] << endl; // output: 99

    cout << fg::green << "price at index 1 = " << price[1] << endl; // output: 55.77

    // changing a value from array
    marks[0] = 100;
    cout << fg::green << "Marks at index 0 after changing = " << marks[0] << endl; // output: 100

    price[1] = 101.99;
    cout << fg::green << "price at index 1 after changing = " << price[1] << endl; // output: 101.99

    // loops in array

    int size;
    cout << fg::yellow << "Enter size of array: ";
    cin >> size;

    int Marks[size];
    cout << "Enter marks: ";

    //loop for getting values
    for (int i = 0; i < size; i++)
    {
        cin >> Marks[i];
    }

    cout << fg::magenta << "\nMarks of student are ==>\n";

    //loop for printing values
    for (int i = 0; i < size; i++)
    {
        cout << Marks[i] << endl;
    }

    return 0;
}