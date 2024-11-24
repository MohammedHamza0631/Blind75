#include<bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return 1;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}
int climbStairs(int n) {
    vector<int> dp(n+1, -1);
    int ans = f(n, dp);
    return ans;
}

int main()
{
  int n;
  cin >> n;
  cout << "Answer is: " << climbStairs(n) << endl;
  return 0;
}
