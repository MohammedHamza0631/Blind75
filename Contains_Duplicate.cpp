#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    set<int> s;
    for (int x : nums)
    {
        s.insert(x);
    }

    return !(s.size() == nums.size());
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << containsDuplicate(nums) << endl;
    return 0;
}