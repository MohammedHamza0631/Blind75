#include <bits/stdc++.h>
using namespace std;

auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int setBits(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        if (n & 1)
            cnt++;
        n = n >> 1;
    }
    return cnt;
}
vector<int> countBits(int n)
{
    vector<int> ans(n + 1, 0);

    for (int i = 0; i <= n; i++)
    {
        int x = setBits(i);
        ans[i] = x;
    }
    return ans;
}
int main()
{
    int n = 5;
    vector<int> ans = countBits(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}