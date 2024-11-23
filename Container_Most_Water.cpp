#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int l = 0;
    int r = height.size() - 1;
    int area = INT_MIN;
    while (l < r)
    {
        int h = min(height[l], height[r]);
        int b = r - l;
        area = max(area, h * b);

        if (height[l] < height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return area;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height) << endl;
    return 0;
}