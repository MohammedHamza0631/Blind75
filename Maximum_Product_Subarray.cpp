#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    int wProd = 1;
    int result = nums[0];

    for (int i = 0; i < n; i++)
    {
        wProd *= nums[i];
        result = max(result, wProd);
        if (wProd == 0)
        {
            wProd = 1;
        }
    }
    wProd = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        wProd *= nums[i];
        result = max(result, wProd);
        if (wProd == 0)
        {
            wProd = 1;
        }
    }
    return result;
}
/* Brute Force:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int result = nums[0];

        for(int i = 0; i < n; i++){
            int p = nums[i];
            for(int j = i+1; j < n; j++){
                result = max(result, p);
                p *= nums[j];

            }
            result = max(result, p);
        }

        return result;
    }
 */
int main()
{
    vector<int> nums = {2, 3, -2, 4};
    cout << maxProduct(nums) << endl;
    return 0;
}