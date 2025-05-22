#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"
#include <limits>

using namespace std;
using namespace rang;

// 1. Create a function that takes two numbers and returns their sum.

double doublesum(double a, double b)
{
    double val = a + b;
    return val;
}

// 2. Write a function that takes a number and returns whether it is even or odd.

void even_odd(int n)
{
    if (n % 2 == 0)
    {
        cout << fg::green << "Even number" << endl;
    }
    else
    {
        cout << fg::yellow << "odd number" << endl;
    }
}

// 3. Write a void function that prints the multiplication table of a given number.

void multiplicationTable(int n)
{
    cout << fg::cyan << "MULTIPLICATION TABLE OF " << n << "--->" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << fg::green << n << " x " << i << " = " << n * i << endl;
    }
    cout << fg::blue << "MULTIPLICATION ENDS------\n";
}

// 4. Create a function that returns the factorial of a number.

long long int fact(int n)
{
    if (n < 0)
    {
        cout << fg::red << "Error: Factorial of a negative number is undefined." << endl;
        return -1; // Return an error value
    }

    if (n == 0)
        return 1;

    long long int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}

// 5. Write a function that checks whether a number is prime or not.

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) // More efficient loop
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// 6. Write a function that calculates and returns the sum of digits of a number.

long long int sumDigits(int n)
{
    int sum = 0;

    while (n > 0)
    {
        int a = n % 10;
        sum += a;
        n /= 10;
    }
    cout << fg::cyan << "\nSum of digits  = " << sum << endl;
    return 0;
}

// 7. Create a function that takes a number and returns the reverse of that number.

void reverseNum(int n)
{
    for (int k = n; k > 0; k /= 10)
    {
        int a = k % 10;
        cout << a;
    }
    cout << endl;
}

// 8. Write a function to find the maximum of three numbers using nested if-else logic

int maxofthree(int a, int b, int c)
{
    if (a >= b)
    {
        if (a >= c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (b >= a)
    {
        if (b >= c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }

    else
    {
        cout << "invalid operartor" << endl;
    }
}

// 9. Use a function to find nCr (combinations), i.e., n! / (r! * (n - r)!).

long long int nCr_val(int n, int r)
{
    int val = fact(n) / (fact(r) * fact(n - r));
    return val;
}

// 10. Create a function that prints all prime numbers between two given numbers.

void printPrime()
{
    int val1;
    cout << fg::yellow << "Enter first integer: ";
    cin >> val1;

    int val2;
    cout << fg::yellow << "Enter second integer: ";
    cin >> val2;

    cout << fg::cyan << "\nPrime Number from " << val1 << " to " << val2 << "---->\n";

    for (int i = val1; i <= val2; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << endl;
        }
    }
}

// 11. Write an overloaded function multiply():
// - One version multiplies two int values
// - Another multiplies three int value
void multiply(int a, int b)
{
    long long int multiplication = a * b;
    cout << multiplication << endl;
}

void multiply(int a, int b, int c)
{
    int multiplication = a * b * c;

    cout << multiplication << endl;
}

// 12. Create a function with default arguments that prints a rectangle of '*':
// Default rows = 3, columns = 5

void printRectangle(int r = 3, int c = 5)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << fg::green << "*" << " ";
        }
        cout << endl;
    }
}

int main()
{
    system("chcp 65001");
    while (true)
    {
        cout << fg::red << "\n-------------------------------\n";
        cout << style::bold << fg::magenta << "\nBeginner Level (Basics of Functions)\n";
        cout << fg::cyan << "1.SUM OF TWO NUMBERS\n";
        cout << fg::cyan << "2.EVEN OR ODD\n";
        cout << fg::cyan << "3.MULTIPLICATION TABLE\n";

        cout << style::bold << fg::magenta << "\n Intermediate Level\n";

        cout << fg::cyan << "4.FACTORIAL OF A NUMBER\n";
        cout << fg::cyan << "5.PRIME OR NON PRIME\n";
        cout << fg::cyan << "6.SUM OF DIGIT OF A NUMBER\n";
        cout << fg::cyan << "7.REVERSE A NUMBER\n";
        cout << fg::cyan << "8.MAXIMUM OF THREE NUMBERS\n";

        cout << style::bold << fg::magenta << "\n Advance Level\n";

        cout << fg::cyan << "9.nCr VALUE\n";
        cout << fg::cyan << "10.PRIME NUMBER BETWEEN TWO NUMBERS\n";
        cout << fg::cyan << "11.PRINT A RECTANGLE \n";

        cout << fg::red << "12.EXIT....." << endl;

        cout << fg::red << "\n-------------------------------\n";

        int choice;
        cout << fg::yellow << "\nEnter a choice (1-12): ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << fg::red << "Invalid input! Please enter a valid number.\n";
            continue;
        }

        if (choice == 1)
        {
            double a;
            cout << fg::blue << "\nEnter first number: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            double b;
            cout << fg::blue << "Enter second number: ";
            cin >> b;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            cout << fg::green << "SUM = " << doublesum(a, b) << endl;
        }

        else if (choice == 2)
        {
            long long int a;
            cout << fg::blue << "\nEnter a number: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }
            even_odd(a);
        }

        else if (choice == 3)
        {
            long long int a;
            cout << fg::blue << "\nEnter a number you want multiplication table: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }
            multiplicationTable(a);
        }

        else if (choice == 4)
        {
            long long int a;
            cout << fg::blue << "\nEnter a number you want its factorial: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }
            cout << fg::green << "factorial of " << a << " = " << fact(a) << endl;
        }

        else if (choice == 5)
        {
            long long int a;
            cout << fg::blue << "\nEnter a number you want to check prime or not: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            char checkp = isPrime(a);
            cout << fg::green << a << " is a prime number? " << checkp << endl;
        }

        else if (choice == 6)
        {
            long long int a;
            cout << fg::blue << "\nEnter a number: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }
            sumDigits(a);
        }

        else if (choice == 7)
        {
            long long int a;
            cout << fg::blue << "\nEnter a number: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            cout << fg::green << "REVERSED NUMBER = ";
            reverseNum(a);
        }

        else if (choice == 8)
        {
            long long int a;
            cout << fg::blue << "\nEnter first number: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            long long int b;
            cout << fg::blue << "\nEnter second number: ";
            cin >> b;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            long long int c;
            cout << fg::blue << "\nEnter third number: ";
            cin >> c;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            cout << fg::green << "maximum number is " << maxofthree(a, b, c) << endl;
        }

        else if (choice == 9)
        {
            long long int a;
            cout << fg::blue << "\nEnter n number: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            long long int r;
            cout << fg::blue << "\nEnter r number: ";
            cin >> r;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            cout << a << "C" << r << " = " << nCr_val(a, r) << endl;
        }

        else if (choice == 10)
        {
            printPrime();
        }

        else if (choice == 11)
        {
            long long int a;
            cout << fg::blue << "\nEnter row value: ";
            cin >> a;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            long long int b;
            cout << fg::blue << "\nEnter column value: ";
            cin >> b;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << fg::red << "Invalid input! Please enter a valid number.\n";
                continue;
            }

            printRectangle(a, b);
        }

        else if (choice == 12)
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
            cout << "Invalid Operator pleaase choose (1-12)" << endl;
        }

        system("pause");
        system("cls");
    }
    return 0;
}