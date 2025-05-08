#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

int main()
{
    system("chcp 65001");

    int price[] = {-99, -998, -777, -775, -94, -378};
    int size = 6;
    int idx = 0;

    // minimum number in a array;
    int smallest = INT32_MAX;

    for (int i = 0; i < size; i++)
    {
        if (price[i] < smallest)
        {
            smallest = price[i];
            idx = i;
        }

        // we can use min function tooo
        // smallest = min(smallest, price[i]);
    }
    cout << fg::green << "Smallest number in array = " << smallest << " at index = " << idx << endl;

    // maximum number in a array;
    int largest = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (price[i] > largest)
        {
            largest = price[i];
            idx = i;
        }

        // we can use max function tooo
        // largest = max(largest, price[i]);
    }
    cout << fg::green << "largest number in array = " << largest << " at index = " << idx << endl;
    return 0;
}