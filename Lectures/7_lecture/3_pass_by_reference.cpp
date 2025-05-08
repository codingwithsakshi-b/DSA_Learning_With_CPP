#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

void changeArray(int arri[], int size)
{
    cout << fg::cyan << "\nin function \n";
    for (int i = 0; i < size; i++)
    {
        arri[i] = 2 * arri[i];
    }
}

int main()
{
    system("chcp 65001");

    cout << fg::magenta << "\n--===PASS BY REFERENCE===--\n";

    int arr[] = {1, 2, 3};

    changeArray(arr, 3);

    cout << fg::cyan << "\nin main\n";
    for (int i = 0; i < 3; i++)
    {
        cout << fg::yellow << arr[i] << " ";
    }
    cout << endl;

    return 0;
}