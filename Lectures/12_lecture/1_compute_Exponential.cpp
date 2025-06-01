#define _WIN32_WINNT 0x0600
#include <iostream>
#include "rang.hpp"

using namespace std;
using namespace rang;

// Brute force Approach
//  if we have to find x to the power n
// Time complexity = O(N)
int powByBFA(int x, int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= x;
    }
    return ans;
}
// Binary Exponential approach;
// Time Complexity = O(log n)
double myPow(double x, int n) {
        if (x==1) return 1.0;
        if (x==0) return 0.0;
        if (n==0) return 1.0;
        if (x==-1 && n%2==0) return 1.0;
        if (x==-1 && n%2!=0) return -1.0;

        long binary_form=n;

        if(n<0){
            x = 1/x;
            binary_form = -binary_form;
        }
        double ans=1;

        while (binary_form>0){
            if (binary_form%2 == 1){
                ans *= x;
            }
            x *= x;
            binary_form /= 2;
        }
        return ans;
    }

int main()
{
    system("chcp 65001");
    cout << fg::blue << "3^2 = " << powByBFA(3, 2) << endl;
    cout << fg::blue << "6^3 = " << myPow(6, 3) << endl;
    return 0;
}