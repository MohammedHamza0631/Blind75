#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vi pre(n);
    pre[0] = 1;
    vi suf(n);
    suf[n - 1] = 1;
    vi ans(n);
    // pre = {1,1,2,6}
    // suf = {24,12,4,1}
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] * nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = pre[i] * suf[i];
    }

    return ans;
}

int main()
{
    vi nums = {1, 2, 3, 4};
    vi ans = productExceptSelf(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}