#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int mini = INT_MAX;
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (prices[i - 1] < mini)
        {
            mini = prices[i - 1];
        }
        profit = max(profit, prices[i] - mini);
    }
    return profit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl;
    return 0;
}