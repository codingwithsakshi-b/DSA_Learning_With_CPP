#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

int dec_to_bin()
{
    int n;
    cout << fg::cyan << "Enter a number you want to change to binary: ";
    cin >> n;

    int bin_value = 0;
    int pow = 1;
    while (n > 0)
    {
        int a = n % 2;
        n /= 2;
        bin_value += a * pow;
        pow *= 10;
    }
    return bin_value;
}

int bin_to_dec()
{
    int n;
    cout << fg::cyan << "Enter a binary number you want to change to decimal: ";
    cin >> n;

    int dec_value = 0;
    int pow = 1;

    while (n > 0)
    {
        int a = n % 10;
        n /= 10;
        dec_value += a * pow;
        pow *= 2;
    }
    return dec_value;
}

int main()
{
    system("chcp 65001");

    cout << fg::magenta << "\nBINARY ---> DECIMAL" << endl;

    cout << fg::green << "binary number= " << dec_to_bin() << endl;

    cout << fg::magenta << "\nDECIMAL ---> BINARY" << endl;

    cout << fg::green << "decimal number= " << bin_to_dec() << endl;

    return 0;
}