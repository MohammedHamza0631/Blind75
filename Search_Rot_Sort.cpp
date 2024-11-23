#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int l = 0, h = nums.size() - 1;
    int ans = -1;

    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[l] <= nums[mid]) // left half is sorted
        {
            if (nums[l] <= target && target <= nums[mid]) // remain in left half only
            {
                h = mid - 1;
            }
            else // go to right half
            {
                l = mid + 1;
            }
        }
        else // right half is sorted
        {
            if (nums[mid] <= target && target <= nums[h]) // remain in right half only
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << search(nums, target) << endl;
    return 0;
}