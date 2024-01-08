#include <bits/stdc++.h>
#define vvi vector<vector<int>>
#define vi vector<int>

using namespace std;

class Solution {
public:
    int f(int ind, vi &arr, vvi &dp, int k)
    {
        if(ind == 0){
            if(k % arr[ind] == 0){
                return k / arr[ind]; // return the no of coins
            }
            else return 1e9;
        }

        if(dp[ind][k] != -1) return dp[ind][k];

        int notTake = 0 + f(ind-1, arr, dp, k);
        int take = 1e9;
        if(arr[ind] <= k){
            take = 1 + f(ind, arr, dp, k - arr[ind]);
        }
        return dp[ind][k] = min(take, notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vvi dp(n, vi(amount + 1, -1));

        int ans = -1;

        ans = f(n-1, coins, dp, amount);
        if(ans == 1e9) return -1;
        return ans;
    }
};
auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
int main()
{
    Solution s;
    vi coins = {1, 2, 5};
    cout << s.coinChange(coins, 11) << endl; 
    return 0;
}