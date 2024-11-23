#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int l = 0;
    int h = n - 1;
    int ans = INT_MAX;

    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (nums[l] <= nums[mid])
        { // left half is sorted
            ans = min(ans, nums[l]);
            l = mid + 1;
        }
        else
        {
            ans = min(ans, nums[mid]);
            h = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << findMin(nums) << endl;
    return 0;
}