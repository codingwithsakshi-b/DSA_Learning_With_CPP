#define _WIN32_WINNT 0x0600
#include <iostream>
#include <vector>
#include "rang.hpp"

using namespace std;
using namespace rang;

// have to return max profit
// Time Complexity = O(N)
int maxProfit(vector<int> stocks)
{

    int max_profit = 0;
    int bestBuy = stocks[0];

    for (int i = 1; i < stocks.size(); i++)
    {
        if (stocks[i] > bestBuy)
        {
            max_profit = max(max_profit, stocks[i] - bestBuy);
        }
        bestBuy = min(bestBuy, stocks[i]);
    }
    return max_profit;
}

int main()
{
    system("chcp 65001");
    vector<int> niftyStocks = {344, 55, 444, 566, 7, 6};
    //here 566-55 = 511
    //we buy stocks on day 2 and sell on day 4 we get the max profit of 511
    cout << fg::green << "Max Profit of nifty shares = " << maxProfit(niftyStocks) << endl;

    return 0;
}