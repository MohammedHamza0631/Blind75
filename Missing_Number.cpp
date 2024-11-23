#include <bits/stdc++.h>
using namespace std;

auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s ^ nums[i];
    }

    for (int i = 0; i <= n; i++)
    {
        s = s ^ i;
    }
    return s;
}
int main()
{
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums) << endl;
    return 0;
}