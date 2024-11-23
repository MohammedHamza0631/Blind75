#include <bits/stdc++.h>
using namespace std;

int hammingWeight(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            cnt++;
        }
        n = n >> 1;
    }
    return cnt;
}
int main()
{
    int n = 00000000000000000000000000001011;
    cout << hammingWeight(n) << endl;
    return 0;
}