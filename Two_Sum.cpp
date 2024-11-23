#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    // Without extra space
    int n = nums.size();
    int left = 0, right = n - 1;
    sort(nums.begin(), nums.end());

    while (left <= right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target)
        {
            return {left, right};
        }
        else if (sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return {};

    // Using Map
    // for(int i = 0; i < n; i++){
    //     if(mp.find(target - nums[i]) != mp.end()){
    //         return {i, mp[target - nums[i]]};
    //     }
    //     mp[nums[i]] = i;
    // }
    // return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector <int> ans = twoSum(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}