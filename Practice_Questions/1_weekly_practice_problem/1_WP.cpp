#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

void isPrime()
{
    long long int n;
    cout << fg::yellow << "Enter a Number for check it is prime or not: ";
    cin >> n;

    for (int count = 2; count < n; count++)
    {
        if (n % count == 0)
        {
            cout << fg::green << "Non Prime!" << endl;
            return;
        }
    }
    cout << fg::green << "Prime Number!\n";
}

void starSquarePattern()
{
    int n;
    cout << fg::yellow << "Enter side of sqaure: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << fg::green << "*" << " ";
        }
        cout << endl;
    }
}

void SquarePattern()
{
    int n;
    cout << fg::yellow << "Enter side of sqaure: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << fg::green << j << " ";
        }
        cout << endl;
    }
}
void trianglePattern()
{
    int n;
    cout << fg::yellow << "Enter length of triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << fg::green << j << " ";
        }
        cout << endl;
    }
}

void charSquarePattern()
{
    int n;
    cout << fg::yellow << "Enter side of sqaure: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << fg::green << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}

void ContNumSquarePattern()
{
    int n;
    cout << fg::yellow << "Enter side of sqaure: ";
    cin >> n;

    int m = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << fg::green << m << " ";
            m++;
        }
        cout << endl;
    }
}

void ContCharquarePattern()
{
    int n;
    cout << fg::yellow << "Enter side of sqaure: ";
    cin >> n;

    char m = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << fg::green << m << " ";
            m = m + 1;
        }
        cout << endl;
    }
}

void startrianglePattern()
{
    int n;
    cout << fg::yellow << "Enter length of triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << fg::green << "*" << " ";
        }
        cout << endl;
    }
}

void DchartrianglePattern()
{
    int n;
    cout << fg::yellow << "Enter length of triangle: ";
    cin >> n;

    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << fg::green << ch << " ";
        }
        ch = ch + 1;
        cout << endl;
    }
}

void reverseNumTrianglePattern()
{
    int n;
    cout << fg::yellow << "Enter length of triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << fg::green << j << " ";
        }
        cout << endl;
    }
}

void FloydsTrianglePattern()
{
    int n;
    cout << fg::yellow << "Enter length of triangle: ";
    cin >> n;

    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fg::green << num << " ";
            num++;
        }
        cout << endl;
    }
}

void CharFloydsTrianglePattern()
{
    int n;
    cout << fg::yellow << "Enter length of triangle: ";
    cin >> n;

    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fg::green << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}

void sumOfDigits()
{
    long long int n;
    cout << fg::yellow << "Enter a Number: ";
    cin >> n;

    int s = 0;

    while (n > 0)
    {
        int r = n % 10;
        s += r;
        n /= 10;
    }
    cout << fg::green << "Sum of Digits = " << s << endl;
}

int main()
{
    system("chcp 65001");

    cout << fg::magenta << "---------WEEKLY PRACTICE 1-----------\n";

    cout << fg::cyan << "\nQ.no - 1. Number is Prime or not.. \n";
    cout << "SOLUTION:-\n";
    isPrime();
    cout << "--------------------------\n";

    //------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 2. * square pattern \n";
    cout << "SOLUTION:-\n";
    starSquarePattern();
    cout << "--------------------------\n";

    //------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 3. Numbers with Square pattern--- \n";
    cout << "SOLUTION:-\n";
    SquarePattern();
    cout << "--------------------------\n";

    //-------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 4. Numbers with triangle pattern---\n";
    cout << "SOLUTION:-\n";
    trianglePattern();
    cout << "--------------------------\n";

    //-------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 5. Character in Square Pattern--- \n";
    cout << "SOLUTION:-\n";
    charSquarePattern();
    cout << "--------------------------\n";

    //--------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 6. Countinous Numbers In a Square Pattern---\n";
    cout << "SOLUTION:-\n";
    ContNumSquarePattern();
    cout << "--------------------------\n";

    //----------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 7. Countinous characters In a Square Pattern--- \n";
    cout << "SOLUTION:-\n";
    ContCharquarePattern();
    cout << "--------------------------\n";

    //------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 8. * in Triangle pattern----\n";
    cout << "SOLUTION:-\n";
    startrianglePattern();
    cout << "--------------------------\n";

    //-------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 9.Character Triangle Pattern--- \n";
    cout << "SOLUTION:-\n";
    DchartrianglePattern();
    cout << "--------------------------\n";

    //-------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 10. Reverse With Numbers-- \n";
    cout << "SOLUTION:-\n";
    reverseNumTrianglePattern();
    cout << "--------------------------\n";

    //--------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 11. Floyd's Triangle pattern---\n";
    cout << "SOLUTION:-\n";
    FloydsTrianglePattern();
    cout << "--------------------------\n";

    //----------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 12. Floyd's Triangle Pattern in Characters--- \n";
    cout << "SOLUTION:-\n";
    CharFloydsTrianglePattern();
    cout << "--------------------------\n";

    //-------------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nQ.no - 13. Sum Of Digits ---\n";
    cout << "SOLUTION:-\n";
    sumOfDigits();
    cout << "--------------------------\n";

    cout << fg::blue << "\n===============THE END================\n";
    return 0;
}
