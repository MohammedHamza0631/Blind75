#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    /*
        int l = 0;
        int r = height.size()-1;
        int lMax = height[l];
        int rMax = height[r];
        int water = 0;

        while(l < r)
        {
            if(lMax < rMax)
            {
                l++;
                lMax = max(lMax, height[l]);
                water += lMax - height[l];
            }
            else
            {
                r--;
                rMax = max(rMax, height[r]);
                water += rMax - height[r];
            }
        }
        return water;

        // the main idea here is to keep track of the maximum height from left and right and then calculate the water trapped
    */
    int n = height.size();
    vector<int> left(n);
    vector<int> right(n);
    left[0] = height[0];
    right[n - 1] = height[n - 1];

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], height[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], height[i]);
    }

    int water = 0;
    for (int i = 0; i < n; i++)
    {
        water += max(0, min(left[i], right[i]) - height[i]); // min of left and right - height of current building
    }

    return water;
}
int main()
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(height) << endl;
    return 0;
}