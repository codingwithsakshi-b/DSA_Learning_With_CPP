#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

void bitwiseAND()
{
    cout << fg::cyan << "CHECKING FOR BITWISE & OPERATORS \nPLEASE INPUT VALUES-->" << endl;
    cout << "------------------";

    long long int a;
    cout << fg::yellow << "\nEnter value 1: ";
    cin >> a;

    long long int b;
    cout << fg::yellow << "Enter value 2: ";
    cin >> b;

    cout << fg::magenta << "\n⭐ BITWISE '&' OPERATOR" << endl;
    cout << "OUTPUT = " << (a & b) << endl;
}

void bitwiseOR()
{
    cout << fg::cyan << "CHECKING FOR BITWISE | OPERATORS \nPLEASE INPUT VALUES-->" << endl;
    cout << "------------------";

    long long int a;
    cout << fg::yellow << "\nEnter value 1: ";
    cin >> a;

    long long int b;
    cout << fg::yellow << "Enter value 2: ";
    cin >> b;

    // bitwise |
    cout << fg::magenta << "\n⭐ BITWISE '|' OPERATOR" << endl;
    cout << "OUTPUT = " << (a | b) << endl;
}

void bitwiseXOR()
{
    cout << fg::cyan << "CHECKING FOR BITWISE ^ OPERATORS \nPLEASE INPUT VALUES-->" << endl;
    cout << "------------------";

    long long int a;
    cout << fg::yellow << "\nEnter value 1: ";
    cin >> a;

    long long int b;
    cout << fg::yellow << "Enter value 2: ";
    cin >> b;

    // bitwise ^
    cout << fg::magenta << "\n⭐ BITWISE '^' OPERATOR" << endl;
    cout << "OUTPUT = " << (a ^ b) << endl;
}

void bitwiseLSHIFT()
{
    cout << fg::cyan << "CHECKING FOR BITWISE << OPERATORS \nPLEASE INPUT VALUES-->" << endl;
    cout << "------------------";

    long long int a;
    cout << fg::yellow << "\nEnter A Number: ";
    cin >> a;

    long long int b;
    cout << fg::yellow << "\nEnter shift: ";
    cin >> b;

    cout << fg::magenta << "\n⭐ BITWISE '<<' OPERATOR" << endl;
    cout << "OUTPUT = " << (a << b) << endl;
}

void bitwiseRSHIFT()
{
    cout << fg::cyan << "CHECKING FOR BITWISE >> OPERATORS \nPLEASE INPUT VALUES-->" << endl;
    cout << "------------------";

    long long int a;
    cout << fg::yellow << "\nEnter A Number: ";
    cin >> a;

    long long int b;
    cout << fg::yellow << "\nEnter shift: ";
    cin >> b;

    cout << fg::magenta << "\n⭐ BITWISE '>>' OPERATOR" << endl;
    cout << "OUTPUT = " << (a >> b) << endl;
}

int main()
{
    system("chcp 65001");

    cout << fg::blue << "\n🌟 WELCOME TO BITWISE CALCULATOR-->\n";

    while (true)
    {
        cout << fg::cyan << "\n-------------📜 MENU----------------\n";
        cout << fg::cyan << "\n1. biwise AND(&) OPERATOR\n";
        cout << fg::cyan << "2. biwise OR(|) OPERATOR\n";
        cout << fg::cyan << "3. biwise XOR(^) OPERATOR\n";
        cout << fg::cyan << "4. biwise LSHIFT(<<) OPERATOR\n";
        cout << fg::cyan << "5. biwise RSHIFT(>>) OPERATOR\n";
        cout << fg::cyan << "6. EXIT\n";

        int choice;
        cout << fg::yellow << "Enter your choice(1-6): ";
        cin >> choice;

        if (choice == 1)
        {
            bitwiseAND();
        }
        else if (choice == 2)
        {
            bitwiseOR();
        }
        else if (choice == 3)
        {
            bitwiseXOR();
        }
        else if (choice == 4)
        {
            bitwiseLSHIFT();
        }
        else if (choice == 5)
        {
            bitwiseRSHIFT();
        }
        else if (choice == 6)
        {
            char confirm;
            cout << fg::yellow << "Are you sure you want to exit? (y/n): ";
            cin >> confirm;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            if (tolower(confirm) == 'y')
            {
                cout << fg::red << "EXITING.......BYE BYE............." << endl;
                break;
            }
            else
            {
                cout << fg::green << "Returning to menu...\n";
            }
        }
        else
        {
            cout << "Invalid Operator pleaase choose (1-6)" << endl;
        }
        system("pause");
        system("cls");
    }

    return 0;
}