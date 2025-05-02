#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

void showBanner()
{
    cout << style::italic << fg::yellow
         << "\n========================================\n"
         << "         🚀 Welcome to C++ World! 🚀\n"
         << "========================================\n"
         << style::reset << endl;
}

int main()
{
    system("chcp 65001"); // 🌟 Important for Unicode/Emoji output!
    showBanner();

    //---------------CONDITIONAL STATEMENTS------------
    cout << style::bold << fg::blue << "\n----------📒 Conditional Statements--------- " << endl;

    int n;
    cout << fg::yellow << "Enter a Number You Want to check +ve or -ve: " << endl;
    cin >> n;

    if (n >= 0)
    {
        cout << fg::green << "Positive Number" << endl;
    }
    else
    {
        cout << fg::red << "Negative Number" << endl;
    }

    //------------------------------------------------------------------------------

    cout << fg::magenta << "\nchecking person's age for Driving License." << endl;

    int Age;
    cout << fg::yellow << "Enter Your Age: " << endl;
    cin >> Age;

    if (Age >= 18)
    {
        cout << fg::green << "🥳 Yes, You may apply for Driving License!" << endl;
    }
    else
    {
        cout << fg::red << "❌ No, You can't apply for Driving License!" << endl;
    }

    //-------------------------------------------------------------------------------------

    cout << fg::magenta << "\nChecking Even or Odd Number!" << endl;

    int num;
    cout << fg::yellow << "Enter a Number: " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << fg::green << "🌟 Even Number!" << endl;
    }
    else
    {
        cout << fg::green << "🌟 Odd Number!" << endl;
    }

    //-----------------------------------------------------------------------------------------------

    cout << fg::magenta << "\nGrade System by if-else-if-else" << endl;

    double marks;
    cout << fg::cyan << "🧑‍🎓 Enter Student Marks: " << endl;
    cin >> marks;

    if (marks >= 90.0)
    {
        cout << fg::green << "🌟Student scored: 'A' Grade!" << endl;
    }
    else if (marks >= 80.0 && marks < 90.0)
    {
        cout << fg::yellow << "🌟Student scored: 'B' Grade!" << endl;
    }
    else if (marks >= 70.0 && marks < 80.0)
    {
        cout << fg::yellow << "🌟Student scored: 'C' Grade!" << endl;
    }
    else if (marks >= 60.0 && marks < 70)
    {
        cout << fg::yellow << "🌟Student scored: 'D' Grade!" << endl;
    }
    else
    {
        cout << fg::red << "STUDENT GOT FAILED!!!!" << endl;
    }

    //----------------------------------------------------------------------------------------------

    cout << fg::magenta << "\nFind Character Lowercase or Uppercase!" << endl;

    char ch;
    cout << fg::yellow << "Enter a letter: ";
    cin >> ch;

    if (ch >= 97 && ch <= 'z')
    {
        cout << fg::green << "Character is Lowercase⏬\n";
    }
    else
    {
        cout << fg::green << "Character is Uppercase ⬆️\n";
    }

    //-----------------------------------------------------------------------------------

    cout << fg::magenta << "\n------------TERNARY STATEMENT--------------" << endl;
    // ONLY FOR SINGLE LINE IN IF-ELSE:
    int int_num;
    cout << fg::yellow << "Enter a Number: ";
    cin >> int_num;

    cout << fg::green << (int_num >= 0 ? "Positive Number" : "Negative Number") << endl;

    //------------------------------LOOPS---------------------------------------------------------------------

    cout << fg::magenta << "\n------------------➰ LOOPS---------------------" << endl;

    cout << fg::cyan << "Printing Numbers 1-some natural num---->" << endl;

    int j;
    cout << fg::yellow << "Enter A natural number You want Counting: ";
    cin >> j;

    int a = 1;
    while (a <= j)
    {
        cout << fg::green << "Counting⌛ " << a << endl;
        a++;
    }
    cout << fg::blue << "🎈 YAYYY You Done it!!!!!" << endl;

    //------------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nSame WOrk from For loop-->" << endl;

    for (int i = 1; i <= j; i++)
    {
        cout << fg::green << i << " ";
    }

    //-----------------------------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nSum of numbers from 1 to k" << endl;

    int k;
    cout << fg::yellow << "Enter a NUmber You want to sum: ";
    cin >> k;

    int sum = 0;

    for (int l = 1; l <= k; l++)
    {
        sum += l;
        // if (l == 5)
        // {
        //     break;
        // }
    }
    cout << fg::green << "TOTAL SUM OF " << k << " Numbers= " << sum << endl;

    //----------------------------------------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nSum of Odd numbers from 1 to k" << endl;

    int K;
    cout << fg::yellow << "Enter a Number: ";
    cin >> K;

    int Sum = 0;

    for (int J = 1; J <= K; J++)
    {
        if (J % 2 != 0) // if we change != to == then it prints even number.
            Sum += J;
    }

    cout << fg::green << "Sum of Odd Numbers = " << Sum << endl;

    //--------------------------------------------------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nSum of even numbers using while loop-->" << endl;

    int L;
    cout << fg::yellow << "Enter a Number: ";
    cin >> L;

    int evenSum = 0;
    int A = 1;

    while (A <= L)
    {
        if (A % 2 == 0)
        {
            evenSum += A;
        }
        A++;
    }
    cout << fg::green << "Sum of even numbers = " << evenSum << endl;

    //----------------------------------------------------------------------------------------------------------

    cout << fg::cyan << "\nDo-while-loops-->" << endl;

    do
    {
        cout << fg::yellow << "Hello World!" << endl;
    } while (3 > 5);

    //-----------------------------------------------------------------

    cout << fg::cyan << "\nCheck a Number is Prime or not: " << endl;

    int u;
    cout << fg::yellow << "Enter a number for checking either it is prime or not: ";
    cin >> u;

    bool isPrime = true;

    for (int count = 2; count < u; count++)
    {
        if (u % count == 0)
        {
            cout << fg::red << "Number is non Prime!" << endl;
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << fg::green << "Number is a prime number!" << endl;
    }

    //----AFTER CHANGING CONDITION-----
    int V;
    cout << fg::yellow << "Enter a number for checking either it is prime or not: ";
    cin >> V;

    bool is_Prime = true;

    for (int I = 2; I * I <= V; I++)
    {
        if (V % I == 0)
        {
            cout << fg::red << "Number is non Prime!" << endl;
            is_Prime = false;
            break;
        }
    }
    if (is_Prime == true)
    {
        cout << fg::green << "Number is a prime number!" << endl;
    }

    //-------------------------------NESTED LOOPS-------------------------------
    cout << fg::cyan << "\n------NESTED LOOPS----------" << endl;

    cout << fg::blue << "Print 5 stars (*) in n line..." << endl;

    int d;
    cout << fg::yellow << "Enter Number of lines = ";
    cin >> d;

    for (int D = 1; D <= d; D++)
    {
        cout << "* * * * *\n";
    }

    return 0;
}