#define _WIN32_WINNT 0x0600
#include <iostream>
#include <cmath>
#include "rang.hpp"

using namespace std;
using namespace rang;

void showBanner()
{
    cout << style::bold << fg::yellow
         << "\n========================================\n"
         << "         🚀 Welcome to C++ World! 🚀\n"
         << "========================================\n"
         << style::reset << endl;
}

int main()
{
    system("chcp 65001"); // 🌟 Important for Unicode/Emoji output!
    showBanner();
    // 🎯 ------------ FIRST PROGRAM ------------
    cout << style::bold << fg::cyan << "👋 Hello Sakshi\n🏫 From JECRC College\n";

    // 🧮 ----------- VARIABLES -------------
    cout << fg::blue << "\n--------------VARIABLES-------------" << endl;
    int age = 19;
    cout << fg::blue << "Age: " << age << "\n"; // 📦 4 bytes for int

    char grade = 'A';
    cout << fg::green << "Grade: " << grade << "\n";

    float price = 100.67f;
    float PI = 3.14f;
    cout << fg::magenta << "PI Value: " << PI << "\n";
    cout << "Price: " << price << "\n";

    bool is_safe = true; // ✅ true --> 1, ❌ false --> 0
    cout << fg::red << "Is Safe: " << is_safe << "\n";

    double prices = 100.99;
    cout << fg::yellow << "Double Price: " << prices << "\n";

    // 🎭 ----------- TYPE CASTING -----------
    cout << fg::cyan << "\n🎭 ----------- TYPE CASTING -----------" << endl;

    // 1. Implicit Type Casting
    char first_letter = 'a';
    int value = first_letter; // ASCII value of 'a' is 97
    cout << fg::blue << "ASCII of 'a': " << value << "\n";

    // 2. Explicit Type Casting
    double Price = 100.99;
    int new_price = int(Price);
    cout << fg::cyan << "Explicitly casted Price: " << new_price << "\n";

    // 🎤 ----------- INPUT FROM USER -----------
    cout << fg::green << "\n🎤 ----------- INPUT FROM USER -----------" << endl;
    int Age;
    cout << fg::green << "🔢 Enter Your Age: ";
    cin >> Age;
    cout << fg::magenta << "📝 Your Age is: " << Age << "\n";

    // ⚙️ ------------- OPERATORS --------------
    cout << fg::yellow << "\n⚙️ ------------- OPERATORS --------------" << endl;
    // 1. Arithmetic Operators ➕➖✖️➗
    int a = 5;
    int b = 10;

    cout << fg::yellow << "Sum = " << (a + b) << endl;
    cout << "Difference = " << (b - a) << endl;
    cout << "Product = " << (a * b) << endl;
    cout << "Division = " << (a / (double)b) << endl;
    cout << "Remainder when 5 / 2 = " << (5 % 2) << endl;

    double result = pow(4, 2);
    cout << "4 raised to the power 2 = " << result << endl;

    // 2. Relational Operators 🔎
    cout << fg::blue << "(a > b): " << (a > b) << endl;
    cout << "(a >= b): " << (a >= b) << endl;
    cout << "(a <= b): " << (a <= b) << endl;
    cout << "(a < b): " << (a < b) << endl;
    cout << "(a == b): " << (a == b) << endl;
    cout << "(a != b): " << (a != b) << endl;

    // 3. Logical Operators 🔗
    cout << "!(a > b): " << !(a > b) << endl;
    cout << "!(a < b): " << !(a < b) << endl;

    // ➕ --------- SUM OF TWO NUMBERS -----------
    cout << fg::magenta << "\n➕ --------- SUM OF TWO NUMBERS -----------" << endl;
    int p, q;

    cout << fg::cyan << "🔢 Enter first number: ";
    cin >> p;

    cout << "🔢 Enter second number: ";
    cin >> q;

    int results = p + q;
    cout << "🧮 Sum = " << results << endl;

    // 🚀 ------------- UNARY OPERATORS ---------------
    cout << fg::red << "\n🚀 ------------- UNARY OPERATORS ---------------" << endl;
    // 1. Increment ++
    int m = 10;
    cout << fg::magenta << "Initial m = " << m << endl;

    int n = m++; // post-increment
    int o = ++m; // pre-increment

    cout << "After Post-Increment, n = " << n << endl;
    cout << "After Pre-Increment, o = " << o << endl;

    // 2. Decrement --
    int j = 10;
    cout << fg::cyan << "Initial j = " << j << endl;

    int k = j--; // post-decrement
    int l = --j; // pre-decrement

    cout << "After Post-Decrement, k = " << k << endl;
    cout << "After Pre-Decrement, l = " << l << endl;

    return 0;
}

// ✨ BOILERPLATE CODE TEMPLATE ✨
// #include <iostream>
// using namespace std;
//
// int main() {
//     return 0;
// }
